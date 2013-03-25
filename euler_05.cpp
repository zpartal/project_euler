/*
Project Euler Problem 5

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
http://projecteuler.net/problem=5

Zachary Partal
3/24/2013

*/

#include <iostream>

using namespace std;

bool div_check(int num) {
	for (int i = 1; i <= 20; i++) {
		if ((num % i) != 0) return false;
	}
	return true;
}

int main() {
	int num = 1;
	while(true) {
		if (div_check(num)) {
			cout << num;
			return 0;
		}
		num++;
	}
}
