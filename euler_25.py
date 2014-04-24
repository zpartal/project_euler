# Project Euler Problem 25

# What is the first term in the Fibonacci sequence to contain 1000 digits?

# http://projecteuler.net/problem=25

# Zachary Partal
# 8/14/2013


import math

def fibonethousand():
	term = 2
	fn = 0
	fa = 1
	fb = 1
	while len(str(fn)) < 1000:
		fn = fa + fb
		fb = fa
		fa = fn
		term += 1
	print(term)

def main():
	fibonethousand()

main()
