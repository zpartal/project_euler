/*
Project Euler Problem 7

What is the 10 001st prime number?
http://projecteuler.net/problem=7

Zachary Partal
3/24/2013

*/

#include <iostream>
#include <vector>

using namespace std;

bool isprime(int num) {
	for (int i = 2; i < num; i++) {
		if ((num % i) == 0) return false;
	}
	return true;
}

int main() {
	long num = 3;
	vector<long> primes;
	primes.push_back(2);
	while (primes.size() <= 10001) {
		if (isprime(num)) {
			//cout << num << endl;
			primes.push_back(num);
		}
		num++;
	}
	
	cout << primes[10000];
	return 0;
}
