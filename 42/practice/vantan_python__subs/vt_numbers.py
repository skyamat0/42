with open("numbers.txt") as f:
	nums = f.read()
	for i in nums.split(sep=","):
		print(i)
