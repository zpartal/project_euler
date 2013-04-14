/*
Project Euler Problem 16

What is the sum of the digits of the number 2^1000?

http://projecteuler.net/problem=16

Zachary Partal
4/14/2013

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

using namespace std;

vector<int> large_power_of_two(int power) {
	vector<int> result;
	result.push_back(1);
	for (int x = 1; x <= power; x++) { // Do this 'power' times
		for (int i = 0; i < result.size(); i++) { // Go through and double everything
			result[i] = result[i] * 2;
		}
		for (int i = 0; i < result.size(); i++) { // Deal with carries
			if (result[i] >= 10) {
				result[i] -= 10;
				if (i+1 == result.size()) result.push_back(1);
				else result[i+1] += 1;
			}
		}
	}
	return result;
}


int main() {
	int input;
	while(true) {
		cin >> input;
		vector<int> result = large_power_of_two(input);
		long sum = 0;
		for (int i = result.size() - 1; i >= 0; i--) {
			cout << result[i] << " ";
			sum += result[i];
		}
		cout << endl;
		cout << "SUM: " << sum << endl;
	}	
	
	return 0;
}
