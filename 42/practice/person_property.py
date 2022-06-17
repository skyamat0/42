class Person_property():
	def __init__(self, name: str) -> None:
		self.name = name
		return (None)

if __name__ == "__main__":
	prop = Person_property(name="yamato")
	print(prop.name)
