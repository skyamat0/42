import test_child
import sys

if __name__ == "__main__":
	greet = test_child.Child(sys.argv[1])
	greet.say_hello()
