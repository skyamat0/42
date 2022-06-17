import sys

argc = len(sys.argv)
argv = sys.argv

if argc >= 4 or argc == 1:
	print("\033[31m"+"[error]argc must be 2"+"\033[0m")
elif argc == 2:
	if argv[1].isdigit():
		for i in range(1, int(argv[1])+1):
			if (i % 15) == 0:
				print("fizzzbuzz")
			elif (i % 5) == 0:
				print("buzz")
			elif (i % 3) == 0:
				print("fizz")
			else:
				print(i)
	elif argv[1] == "man":
		print("[how to use fizzbuzz.py]")
		print("-This module outputs fizzbuzz between 1 to argv")
		print("-if you inputs two numbers, this module outputs fizzbuzz between min to max")
		print()
		print("[example1] python fizzbuzz.py 5")
		print("[out] 1")
		print("[out] 2")
		print("[out] fizz")
		print("[out] 4")
		print("[out] buzz")
		print()
		print("[example] python fizzbuzz.py 15 8")
		print("[out] fizzbuzz")
		print("[out] 14")
		print("[out] 13")
		print("[out] fizz")
		print("[out] 11")
		print("[out] buzz")
		print("[out] fizz")
		print("[out] 8")
		print()
		print("\033[34m"+"NOTE: you can input one or two numbers, if not this module gives you an error."+"\033[0m")
	else:
		print("\033[31m"+"[error]argv must be plus integer number"+"\033[0m")
else:
	nums = [argv[1], argv[2]]
	for i in nums:
		if not i.isdigit():
			print("\033[31m"+"[error]argv must be plus integer number"+"\033[0m")
			exit()

	nums = [int(i) for i in nums]
	sign = int((nums[1] - nums[0]) / abs(nums[1] - nums[0]))

	for i in range(nums[0], nums[1]+sign, sign):
		if (i % 15) == 0:
			print("fizzzbuzz")
		elif (i % 5) == 0:
			print("buzz")
		elif (i % 3) == 0:
			print("fizz")
		else:
			print(i)
	pass
