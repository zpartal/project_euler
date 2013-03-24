/*
Project Euler Problem 7
What is the 10 001st prime number?
http://projecteuler.net/problem=7

Zachary Partal
3/24/2013

*/

#include <iostream>

using namespace std;

int main() {
	int sum_squares = 0;
	int square_sums = 0;
	
	int sum = 0;
	for (int i = 1; i <= 100; i++) {
		sum_squares += i*i;
		sum += i;
	}
	square_sums = sum*sum;
	int output = square_sums - sum_squares;
	cout << output << endl;
	
	return 0;
}
