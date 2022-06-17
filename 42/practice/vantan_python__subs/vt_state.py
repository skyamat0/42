import sys

def is_state(argv):
	states = {
	"Oregon" : "OR",
	"Alabama" : "AL",
	"New Jersey": "NJ",
	"Colorado" : "CO"
	}
	capital_cities = {
	"OR": "Salem",
	"AL": "Montgomery",
	"NJ": "Trenton",
	"CO": "Denver"
	}
	if argv in list(capital_cities.values()):
		for cap_key, cap_val in capital_cities.items():
			if argv == cap_val:
				for st_key, st_val in states.items():
					if cap_key == st_val:
						return (st_key)
	else:
		return ("Unknown capital city")

if __name__ == "__main__":

	argv = sys.argv
	argc = len(argv)
	if argc != 2:
		exit()
	else:
		print(is_state(argv[1]))
