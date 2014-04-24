/*
Project Euler Problem 10

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
http://projecteuler.net/problem=10

Zachary Partal
3/25/2013

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

using namespace std;

vector<int> primes_below_n(int n) {
	vector<int> num_list (n+1, 0);
	vector<int> primes;
	for (int i = 2; i < n+1; i++) {
		num_list[i] = i;
	}
	for (int p = 2; p < (int)sqrt(n); p++) {
		for (int j = 2*p; j < n+1; j = j+p) {
			num_list[j] = 0;
		}
	}
	for (int i = 0; i < n+1; i++) {
		if (num_list[i] != 0) primes.push_back(num_list[i]);
	}	
	return primes;
}

int main() {	
	vector<int> primes = primes_below_n(2000000);
	long long sum = 0;
	cout << endl << "PRIMES: " << endl;
	for (int i = 0; i < primes.size(); i++) {
		sum += primes[i];
	}
	cout << "SUM: " << sum << endl;
	return 0;
}
