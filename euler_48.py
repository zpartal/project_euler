# Project Euler Problem 48

# Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000.

# http://projecteuler.net/problem=48

# Zachary Partal
# 8/15/2013


import math

def selfpowersum(n):
	sum = 0
	for x in range(n):
		sum += (x+1)**(x+1)
	print(str(sum)[-10:])

def main():
	selfpowersum(1000)

main()