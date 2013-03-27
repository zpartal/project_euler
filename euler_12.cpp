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

int main() {
	
	int tri_num = 1;
	int it = 1;
	int num_divisors = 0;
	
	while(true) {
		// check divisors of tri num up to tri_num
		for (int i = 1; i <= (int) sqrt(tri_num); i++) {
			if (tri_num % i == 0) {
				num_divisors++;
				if (num_divisors == 500) { cout << "Tri Num: " << tri_num << endl; return 0; }
			}
		}
		num_divisors = 0;
		// Make next trinum
		it++;
		tri_num = tri_num + it;	
		//cout << tri_num << endl;
	}
	return 0;
}
