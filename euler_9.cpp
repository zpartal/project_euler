/*
Project Euler Problem 9

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
http://projecteuler.net/problem=9

Zachary Partal
3/25/2013

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h> 
#include <stdlib.h>


using namespace std;

int main() {
	
	for (int i = 1; i < 1000; i++) {
		for (int j = 1; j < 1000; j++) {
			for (int k = 1; k < 1000; k++) {
				int calc = j*j + k*k;
				int test = i*i;
				if (test == calc) {
					if ((i+j+k) == 1000) {
						cout << "Prod : " << i*j*k << " ijk: " << i << " " << j << " " << k;
					}
				}				
			}
		}	
	}
	return 0;
}
