class Num_init():
	def __init__(self, x: int, y: int) -> None:
		self.x = x
		self.y = y
		return (None)

class Sum(Num_init):

	def __init__(self, x: int, y: int):
		super().__init__(x, y)

		self.sum_result = self.sum()
		return (None)

	def sum(self):
		return (self.x + self.y)

s = Sum(x=5, y=100)
print(s.sum_result)
