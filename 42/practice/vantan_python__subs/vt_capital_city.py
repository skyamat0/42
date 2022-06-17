import sys

def is_capital_city(argv):
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
	if argv in states:
		return (capital_cities[states[argv]])
	else:
		return ("Unknown state")

if __name__ == "__main__":

	argv = sys.argv
	argc = len(argv)

	if argc != 2:
		exit()
	else:
		print(is_capital_city(argv[1]))
