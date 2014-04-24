# Project Euler Problem 22

# Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, 
# begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, 
# multiply this value by its alphabetical position in the list to obtain a name score.

# For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, 
# is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.

# What is the total of all the name scores in the file?

# http://projecteuler.net/problem=22

# Zachary Partal
# 9/29/2013


import string
import time
startTime = time.time()

def main():
	names = open("euler_22_input.txt", 'r').read().replace("\"","").split(",")
	names.sort()
	names = [x.lower() for x in names]
	let_dict = dict(zip(string.ascii_lowercase,range(1,27)))
	score = 0
	for i in range(len(names)):
		word_score = 0
		for j in names[i]:
			word_score += let_dict[j]
		score += ((i+1)*word_score)

	print(score)
	print('Solved in %f sec' % float(time.time() - startTime))

main()