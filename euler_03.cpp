/*
Euler Project 3

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include "math.h"
#include <list>

using namespace std;

int main()
{
	double limit = 0;
	list<int> primes;
	list<int>::iterator it;
	list<int>::reverse_iterator rit;
	
	cout << "Enter number: ";
	cin >> limit;
	
	// Only generating primes to sqrt(n)
	
    // Get square root of limit
	double sqrtlim = sqrt(limit);
	int fullsize = int(sqrtlim);
	
    // Create list of all numbers 0 -> n (n=limit)
	for (int i = 0; i <= limit; i++)
	{
		primes.push_back(i);
	}
	
    
    // Seive starting at 2
	int p = 2;
	
	while (p*p<limit) // only goes up to p^2
	{
		for ( it = primes.begin(); it != primes.end(); it++) // this goes over from the start
		{
			if( *it % p == 0 && *it != p)
			{
				it = primes.erase(it);
			}
		}		
		p++;
	}
	
	while(true)
	{
		cout << "Which prime? \n";
		int xw;
		cin >> xw;
		int count = 0;
		for ( rit = primes.rbegin(); rit != primes.rend(); rit++)
		{
			if( count == xw)
			{
			cout << "size: " << *rit << '\n';
			}
			count ++;
		}
	}
	return 0;
}
