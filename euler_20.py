# Project Euler Problem 20

# Find the sum of the digits in the number 100!

# http://projecteuler.net/problem=20

# Zachary Partal
# 8/14/2013


import math

def factorial(n):
	num = 1
	for x in range(n):
		num = num * (x+1)
	return num

def sumofdigits(n):
	sum = 0
	result = str(factorial(n))
	for i in str(factorial(n)):
		sum += int(i) 
	print(sum)

def main():
	sumofdigits(100)

main()