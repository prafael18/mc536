import requests
import lxml.html as lh

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

def main():
	questions = []

	# The desired URI problems. In this case, set the following bounds [1001, 2935]
	rangeProblems = [1001, 1003]

	for i in range(rangeProblems[0], rangeProblems[1] + 1):
		url = 'https://www.urionlinejudge.com.br/repository/UOJ_%d_en.html' % (i)

		# Creates a handle, page, to handle the contents of the website
		page = requests.get(url)

		if not page:
			print("The page %s was not found" % url)
			continue

		# Stores the contents of the website under doc
		doc = lh.fromstring(page.content)

		# Creates the question class and adds it to the list
		question = Question()
		question.id = i
		question.timelimit = float(doc.xpath('//div[@class="header"]//strong')[0].text_content().split(':')[1])
		question.input = doc.xpath('//div[@class="input"]')[0].text_content().strip(chr(10)).strip(chr(32)).strip(chr(10)).strip(chr(32)).rstrip(chr(10))
		question.output = doc.xpath('//div[@class="output"]')[0].text_content().strip(chr(10)).strip(chr(32)).strip(chr(10)).strip(chr(32)).rstrip(chr(10))
		question.name = doc.xpath('//div[@class="header"]//h1')[0].text_content().strip(chr(10)).strip(chr(32)).strip(chr(10)).strip(chr(32)).rstrip(chr(10))
		question.author = doc.xpath('//div[@class="header"]//div')[0].text_content().strip(chr(10)).strip(chr(32)).strip(chr(10)).strip(chr(32)).rstrip(chr(10))
		question.description = doc.xpath('//div[@class="description"]')[0].text_content().strip(chr(10)).strip(chr(32)).strip(chr(10)).strip(chr(32))

		# for i in question.output:
		# 	print(ord(i))

		url = 'https://www.urionlinejudge.com.br/judge/en/problems/view/%d' % (i)

		# Creates a handle, page, to handle the contents of the website
		page = requests.get(url)

		if not page:
			print("The page %s was not found" % url)
			continue

		# Stores the contents of the website under doc
		doc = lh.fromstring(page.content)

		question.category = doc.xpath('//div[@id="problem-menu"]//a')[-1].text_content()
		question.level = doc.xpath('//div[@id="problem-menu"]//span')[0].text_content()

		questions.append(question)

	for q in questions:
		print(q)
		print("***********************************************************\n")

main()
