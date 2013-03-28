/*
Project Euler Problem 3

hat is the largest prime factor of the number 600851475143 ?
http://projecteuler.net/problem=3

Zachary Partal
3/25/2013

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

vector<int> primes_below_n(long long n) {
	vector<long long> num_list (n+1, 0);
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
	long long num = 600851475143LL;
	vector<int> primes = primes_below_n(num);
	int i = 0;
	int curprime = primes[i];
	
	while (curprime*curprime <= num) {
		if (num % curprime == 0) {
			cout << curprime;
			num = num/curprime;			
		}
		else {
			i++;
			curprime = primes[i];
		}
	}
	
	return 0;
}

