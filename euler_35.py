# Project Euler Problem 35

# The number, 197, is called a circular prime because all rotations of the digits: 197, 971, and 719, are themselves prime.

# There are thirteen such primes below 100: 2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, and 97.

# How many circular primes are there below one million?

# http://projecteuler.net/problem=35

# Zachary Partal
# 4/23/2013


import math

def primes(n):
	primes = range(2, n+1)
	p = 2
	while p < n:
	    for i in range(p, n+1):
	        if p*i in primes:
	            primes.remove(p*i)
	    p += 1
	return primes

def main():
	primes_list = primes(1000000)
	print "fin"
	return

main()
