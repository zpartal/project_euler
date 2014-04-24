/*
Project Euler Problem 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91*99.

Find the largest palindrome made from the product of two 3-digit numbers.
http://projecteuler.net/problem=4

Zachary Partal
3/24/2013

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

bool isPalindrome(int num) {
	stringstream ss; 
	ss << num;
	string num_str = ss.str();
	if (num_str == string(num_str.rbegin(), num_str.rend())) return true;
	else return false;	
}

int main() {
	int largest = 0;
	for (int i = 100; i < 1000; i++) {
		for (int j = 100; j < 1000; j++) {
			if (isPalindrome(i*j)) {
				cout << "i*j: " << i*j << " i: " << i << " j: " << j << endl;
				if ((i*j) > largest) largest = i*j;
			}
		}
	}
	cout << largest;

	return 0;
}
