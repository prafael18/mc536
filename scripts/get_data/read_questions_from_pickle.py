import json
import pickle
import requests

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

file = open('../data/questions.pickle', 'rb')

questions = pickle.load(file)
