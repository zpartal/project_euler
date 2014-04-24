/*
Euler Project 2

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include "iostream"
using namespace std;

int main()
{
	long int total = 2;
	
	int prev2 = 1;
	int prev1 = 2;
	int cur = 0;
	
	while( prev1 + prev2 < 4000000)
	{
		cur = prev1 + prev2;
		//cout << cur << ' ';
		if(cur % 2 == 0)
		{
			total += cur;
		}
		prev2 = prev1;
		prev1 = cur;
	}
		
	cout << '\n' << total;
	
	return 0;
}
