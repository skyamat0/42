from character import character_property

class enemy(character_property):
	def action(self, p_hp: int, command: str) -> int:
		if command == "attack":
			p_hp -= self.attack
			print(f"{self.name} attack you!")
			print(f"you got damaged {self.attack}!")
			return p_hp


