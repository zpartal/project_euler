/*
Project Euler Problem 14

The following iterative sequence is defined for the set of positive integers:

n  n/2 (n is even)
n  3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13  40  20  10  5  16  8  4  2  1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.

http://projecteuler.net/problem=14

Zachary Partal
3/28/2013

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

using namespace std;

int main() {
	
	int largest = 0;
	int num = 0;
	for (int i = 1; i <= 1000000; i++) {
		int length = 1;
		long long int next = i;
		while (next != 1) {
			if (next % 2 == 0) next /= 2;
			else next = (3 * next) + 1;	
			length++;
		} 
		if (length > largest)  { largest = length; num = i; }
	}
	
	cout << "Largest chain: " << num << endl;
	
	return 0;
}
