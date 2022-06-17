from person_property import Person_property

class Person(Person_property):
	def say_hello(self) -> None:
		print(f"hello, {self.name}")
		return (None)

if __name__ == "__main__":
	yamato = Person(name="yamato")
	yamato.say_hello()
