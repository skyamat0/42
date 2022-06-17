def my_var():
	vars = [10,
			"10",
			"ten",
			10.0,
			True,
			[10],
			{"10": "10"},
			(10,),
			{10}
			]
	for var in vars:
		print(f"{var} has a type {type(var)}")
	return (None)

if __name__ == "__main__":
	my_var()
