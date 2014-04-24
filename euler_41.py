# Project Euler Problem 41

# We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once. For example, 2143 is a 4-digit pandigital and is also prime.
# What is the largest n-digit pandigital prime that exists?

# http://projecteuler.net/problem=41

# Zachary Partal
# 4/23/2014

import itertools

def isPrime(n):
	if n <= 3:
		if n <= 1:
			return False
		return True
	if not n%2 or not n%3:
		return False
	for i in range(5, int(n**0.5)+1, 6):
		if not n%i or not n%(i+2):
			return False
	return True

def genPanDigital():
	digits = [1,2,3,4,5,6,7]
	return itertools.permutations(digits)

maxpd = 0
for n in genPanDigital():
	x = int(''.join(map(str,n)))
	if isPrime(x):
		if x > maxpd:
			maxpd = x

print maxpd
