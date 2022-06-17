#!/bin/python
import sys
import matplotlib.pyplot as plt
import numpy as np

x = np.random.randn(10)
y = np.random.randn(10)
argc = len(sys.argv)

if argc != 2:
	print("arguments are allowed only two.")
	exit()
else:
	figure = sys.argv[1]
	if figure == "scatter":
		plt.scatter(x, y)
	elif figure == "hist":
		plt.hist(x)
	else :
		print("sorry, I don't know such figure.")
	plt.show()

