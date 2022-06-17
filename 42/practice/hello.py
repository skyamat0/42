def say_hello() -> None:
	print("hello")
	return (0)

#print(f"sub module:{__name__}")
if __name__ == "__main__":
	say_hello()
	for i in range(100):
		print(f"{i+1}" , end=",")
