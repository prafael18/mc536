import re
import json
import pickle
import requests
from random import seed
from random import random
import MySQLdb # python3 -m pip install --user mysqlclient

seed(1) # seed random number generator

class Question:
	"""
	The URI python class

	Atributes:
		name (str): Problem name
		number (int): Problem number id
		input (str): Problem input description
		output (str): Problem output description
		timelimit (float): Problem limit of execution
		description (str): Problem main description
	"""

	def __init__(self):
		self.id = 0
		self.name = ""
		self.input = ""
		self.level = ""
		self.author = ""
		self.output = ""
		self.category = ""
		self.timelimit = 0.0
		self.description = ""

	def __repr__(self):
		str = "Questions attributes("
		str = str + ("id=%d" % self.id) + ","
		str = str + ("name='%s'" % self.name) + ","
		str = str + ("author='%s'" % self.author) + ","
		str = str + ("description='%s'" % self.description) + ","
		str = str + ("input='%s'" % self.input) + ","
		str = str + ("output='%s'" % self.output) + ","
		str = str + ("level='%s'" % self.level) + ","
		str = str + ("category='%s'" % self.category) + ","
		str = str + ("timelimit=%f" % self.timelimit) + ")"
		return str

	def toJSON(self):
		return json.dumps(self, default=lambda o: o.__dict__, sort_keys=True, indent=4)

file = open('../../../../data/questions.pickle', 'rb')

questions = pickle.load(file)

db = MySQLdb.connect(
	host="localhost",  # your host
	user="root",       # username
	passwd="password",     # password
	db="uni_competicoes",    # name of the database
	charset='utf8mb4'
)

# Create a Cursor object to execute queries.
cur = db.cursor()

cur.execute("DELETE FROM propoe")
cur.execute("DELETE FROM questao")

# Select data from table using SQL query.
cur.execute("SELECT * FROM proponente")

cpfs = []

# obtem todos os cpfs dos proponentes
for row in cur.fetchall(): cpfs.append(row[0])

num_cpfs = len(cpfs)

success = 0

for i in range(0, len(questions)):
	try:
		random_cpf = cpfs[int(num_cpfs * random())]

		year = int(2010 + (2018 - 2010 + 1) * random())
		month = 1 + int(12 * random())
		day = int(1 + 27 * random())

		questions[i].name = re.sub("'", "`", questions[i].name).encode("utf-8").decode("utf-8")
		questions[i].level = re.sub("'", "`", questions[i].level).encode("utf-8").decode("utf-8")
		questions[i].description = re.sub("'", "`", questions[i].description).encode("utf-8").decode("utf-8")
		questions[i].input = re.sub("'", "`", questions[i].input).encode("utf-8").decode("utf-8")
		questions[i].output = re.sub("'", "`", questions[i].output).encode("utf-8").decode("utf-8")
		questions[i].category = re.sub("'", "`", questions[i].category).encode("utf-8").decode("utf-8")

		str_insert = str("INSERT INTO questao(id, nome, nivel, enunciado, entrada, saida, limite_de_tempo, nome_topico)" +
			"VALUES(%d, '%s', %d, '%s', '%s', '%s', %f, '%s');" % (
				questions[i].id,
				questions[i].name,
				int(questions[i].level.split()[1]),
				questions[i].description,
				questions[i].input,
				questions[i].output,
				questions[i].timelimit,
				questions[i].category.upper()
		))

		cur.execute("DELETE FROM questao WHERE id = %d" % questions[i].id)
		cur.execute(str_insert)

		cur.execute(
			"INSERT INTO propoe(id, cpf, data) VALUES(%d, %d, '%d-%d-%d')" % (questions[i].id, random_cpf, year, month, day))

		randVal = random()
		if randVal > 0.8: # verifica se dois proponentes deverao ser autor da questao
			random_cpf2 = cpfs[int(num_cpfs * random())]

			while random_cpf2 == random_cpf:
				random_cpf2 = cpfs[int(num_cpfs * random())]

			cur.execute(
				"INSERT INTO propoe(id, cpf, data) VALUES(%d, %d, '%d-%d-%d')" % (questions[i].id, random_cpf2, year, month, day))

			if randVal > 0.9: # verifica se tres proponentes deverao ser autores da questao
				random_cpf3 = cpfs[int(num_cpfs * random())]

				while random_cpf3 == random_cpf2 or random_cpf3 == random_cpf:
					random_cpf3 = cpfs[int(num_cpfs * random())]

				cur.execute(
					"INSERT INTO propoe(id, cpf, data) VALUES(%d, %d, '%d-%d-%d')" % (questions[i].id, random_cpf3, year, month, day))

		print("###################")
		db.commit()

	except (MySQLdb.Error, MySQLdb.Warning) as err:
		print("# Question %d not written to MysqlDb" % i)
		print("# Error: ", err)
	else:
		success = success + 1
		print("# Question %d correctly written to MysqlDb" % i)

print("Total success: %d" % success)
