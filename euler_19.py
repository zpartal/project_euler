# Project Euler Problem 19

# You are given the following information, but you may prefer to do some research for yourself.

# 1 Jan 1900 was a Monday.
# Thirty days has September,
# April, June and November.
# All the rest have thirty-one,
# Saving February alone,
# Which has twenty-eight, rain or shine.
# And on leap years, twenty-nine.
# A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
# How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

# http://projecteuler.net/problem=19

# Zachary Partal
# 8/14/2013


def sundaycount(sd, sm, sy, ed, em, ey):
	d = 1
	m = 1
	y = 1900
	w = "monday"
	cal = []
	
	while d != ed and m != em and y != ey:
		if (d+1) < 31: d += 1
		else: 
			m += 1
			d = 1
		if (m+1) > 12: 
			y += 1
			m = 1
		d1 = d,m,y,w
		print(d1)


def main():
	sundaycount(1,1,1901,31,12,1902)

main()