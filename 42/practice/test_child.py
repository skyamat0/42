from test_parent import Parent

class Child(Parent):
	def __init__(self, input_name):
		self.name = input_name
	def say_hello(self):
		print("hello", self.name)

if __name__ == "__main__":
	Child("yamato").say_hello()
