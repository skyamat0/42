def name_input() -> str:
	print("what is your name??:", end=" ")
	name = input()
	return (name)

def is_command(command: str) -> bool:
	commands = ["attack"]
	if command in commands:
		return (True)
	else:
		print("!!!type correct command!!!")
		return (False)

def is_mp(mp, consume_mp):
	if (mp - consume_mp) < 0:
		return (False)
	else:
		return (True)
