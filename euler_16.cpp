/*
Project Euler Problem 16

What is the sum of the digits of the number 2^1000?

http://projecteuler.net/problem=16

Zachary Partal
3/28/2013

*/

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>

using namespace std;

vector<int> double_vec(vector<int> num, int carry, int pos) {
	cout << "new call " << carry << " " << pos << endl;
	if ( (num[pos] * 2 + carry) < 10 ) {
		num[pos] = (num[pos] * 2) + carry;
		carry = 0;
		cout << "no carry: " << num[pos] << endl;
		pos++;
		cout << "new pos: " << pos << " " << num.size() <<  endl;
		if (pos == num.size()) { cout << "RETURN" << endl; return num; }
		else {
			double_vec(num, carry, pos);
		}
	}
	else {
		num[pos] = (num[pos] * 2) + carry - 10;
		carry = 1;
		cout << "carry : " << num[pos] << endl;
		cout << "size: " << num.size() << endl;
		if (pos == (num.size()-1)) {
			num.push_back(1);
			return num;
		}
		else {
			pos++;
			double_vec(num, carry, pos);
		}
	}
	
}

int main() {
	
	vector<int> num;
	num.push_back(1);
	for (int i = 0; i < 10; i++) {
		num = double_vec(num, 0, 0);
	}
	for (int i = num.size()-1; i >= 0; i--) {
		cout << num[i];
	}
	
	
	
	return 0;
}
