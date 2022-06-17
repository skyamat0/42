from character import character_property
#from config import is_mp, is_command

class protagonist(character_property):
	def action(self, e_hp: int, command: str) -> str:
		if command == "attack":
			e_hp -= self.attack
			print(f"{self.name} attack to enemy!")
			print(f"enemy got damaged {self.attack}!")
			return e_hp

'''		if command == "magic":
			print("select your magic:")
			print("[ fire heal ]:", end=" ")
			magics = [ fire heal ]
			magic = input()
			while magic not in magics:
				print("you don't have such magic")
				print("select your magic:")
				magic = input()
			if magic == "fire":
				if is_mp(mp=self.mp, consume_mp=2):
					print(f"{self.name} fire to enemy!")
					print(f"enemy got damaged 2!")
					e_hp -= 2
					self.mp -= 4
					return e_hp
'''

