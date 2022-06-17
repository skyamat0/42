from vt_capital_city import is_capital_city
from vt_state import is_state
import sys

def arg_is_state(arg: str, d: dict) -> bool:
	d_keys = [k.lower() for k in list(d.keys())]
	if arg.lower().strip() in d_keys:
		return (True)
	else:
		return (False)

def arg_is_capital(arg: str, d: dict) -> bool:
	d_vals = [k.lower() for k in list(d.values())]
	if arg.lower().strip() in d_vals:
		return (True)
	else:
		return (False)

argv = sys.argv
argc = len(argv)

if argc != 2:
	exit()
else:
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
	args = argv[1].split(",")
	args = [arg.strip() for arg in args]
	for arg in args:
		if arg == " ":
			continue
		elif arg_is_state(arg, states):
			print(f"{is_state(arg.capitalize())} is the capital of {arg}")
		elif arg_is_capital(arg, capital_cities):
			print(f"{arg} is the capital of {is_state(arg.capitalize())}")
		else:
			print(f"{arg} is neither a capital city nor a state")
