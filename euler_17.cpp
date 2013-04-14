/*
Project Euler Problem 17

If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words, how many letters would be used?

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

string basic_num_to_word(int num) {
	string num_as_word;
	switch(num) {
		case 1: 
			num_as_word = "one";
			break;
		case 2: 
			num_as_word = "two";
			break;
		case 3: 
			num_as_word = "three";
			break;
		case 4: 
			num_as_word = "four";
			break;
		case 5: 
			num_as_word = "five";
			break;
		case 6: 
			num_as_word = "six";
			break;
		case 7: 
			num_as_word = "seven";
			break;
		case 8: 
			num_as_word = "eight";
			break;
		case 9: 
			num_as_word = "nine";
			break;
		case 10: 
			num_as_word = "ten";
			break;
		case 11: 
			num_as_word = "eleven";
			break;
		case 12: 
			num_as_word = "twelve";
			break;
		case 13: 
			num_as_word = "thirteen";
			break;
		case 14: 
			num_as_word = "fourteen";
			break;
		case 15: 
			num_as_word = "fifteen";
			break;
		case 16: 
			num_as_word = "sixteen";
			break;
		case 17: 
			num_as_word = "seventeen";
			break;
		case 18: 
			num_as_word = "eighteen";
			break;
		case 19: 
			num_as_word = "nineteen";
			break;
		case 20: 
			num_as_word = "twenty";
			break;
		case 30: 
			num_as_word = "thirty";
			break;
		case 40: 
			num_as_word = "forty";
			break;
		case 50: 
			num_as_word = "fifty";
			break;
		case 60: 
			num_as_word = "sixty";
			break;
		case 70: 
			num_as_word = "seventy";
			break;
		case 80: 
			num_as_word = "eighty";
			break;
		case 90: 
			num_as_word = "nintey";
			break;
	}
	return num_as_word;
}
string num_to_word(int num) {
	string num_as_word;
	if(num < 20) num_as_word = basic_num_to_word(num);
	else if(num == 1000) num_as_word = "onethousand";
	else if(num < 100) num_as_word = basic_num_to_word(num/10*10) + basic_num_to_word(num%(num/10*10));
	else if(num % 100 == 0) num_as_word = basic_num_to_word(num/100) + "hundred";
	else if(num < 1000) {
		num_as_word = basic_num_to_word(num/100) + "hundredand" + num_to_word(num%100);
	}	
	return num_as_word;
}



int main() {
	int num;
	// while(true) {
	// 	cout << ">> ";
	// 	cin >> num;
	// 	cout << num_to_word(num) << " Length: " << num_to_word(num).length() << endl;
	// }
	string final_result;
	for(int i = 1; i <= 1000; i++) {
		final_result += num_to_word(i);
	}
	cout << "length " << final_result.size() << endl;

	return 0;
}
