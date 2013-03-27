/*
Project Euler Problem 12

What is the value of the first triangle number to have over five hundred divisors?

http://projecteuler.net/problem=12

Zachary Partal
3/26/2013

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

using namespace std;

int nod(int n) {
	int divisors = 0;
	for (int i = 1; i < (int) sqrt(n); i++) {
		if (n % i == 0) divisors += 2;
	}
	cout << "n: " << n << " div: " << divisors << endl;
	return divisors;
}

int main() {
	
	int tri_num = 1;
	int it = 1;
	int num_divisors = 0;
	
	while(nod(tri_num)<501) {
		it++;
		tri_num = tri_num + it;	
		//cout << tri_num << endl;
	}
	return 0;
}
