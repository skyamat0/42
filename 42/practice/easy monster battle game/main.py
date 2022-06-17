from enemy import enemy
from protagonist import protagonist
from config import name_input, is_command

if __name__ == "__main__":

	enemy 		= enemy(name="slime", hp=3, mp=0, attack=1)
	name 		= name_input()
	protagonist = protagonist(name=name, hp=10, mp=10, attack=1)

	while True:
		print("\033[34m"+"============="+"\033[0m")
		print("\033[34m"+"| your turn |"+"\033[0m")
		print("\033[34m"+"============="+"\033[0m")
		print("\033[33m"+"=============condition============="+"\033[0m")
		print("\033[33m"+f"{protagonist.name}'s hp is {protagonist.hp}"+"\033[0m")
		print("\033[33m"+f"{enemy.name}'s hp is {enemy.hp}"+"\033[0m")
		print("\033[33m"+"==================================="+"\033[0m")
		print("select your action: [ attack , magic, defense]", end='\t')
		command = input()

		print()

		if command == "exit":
			exit()
		if not is_command(command):
			continue

		enemy.hp = protagonist.action(e_hp=enemy.hp, command=command)
		if enemy.hp <= 0:
			print("********you win!!!********")
			break

		print("\033[31m"+"============="+"\033[0m")
		print("\033[31m"+"| enemy's turn |"+"\033[0m")
		print("\033[31m"+"============="+"\033[0m")
		e_command = "attack"
		protagonist.hp = enemy.action(p_hp=protagonist.hp, command=e_command)

		print()
		if protagonist.hp <= 0:
			print("you lose")
			break
		else:
			pass
	exit()
