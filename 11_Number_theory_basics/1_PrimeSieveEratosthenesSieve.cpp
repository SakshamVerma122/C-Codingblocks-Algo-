#include<bits/stdc++.h>
using namespace std;

bool prime_sqrt(int n)
{
	if( n == 2)
	{
		return true;
	}

	if( n == 0 || n == 1)
	{
		return false;
	}


	for(int i = 2;i * i < n; i++)
	{
		if(n % i == 0 )
		{
			return false;
		}
	}
	return true;
}

void prime_sieve(int* p)
{
	//array ={0,1,2,3,4,5,6,7,8,9.......}

	// Marking all odd number's prime
	for(int i = 3;i <= 1000000 ;i+=2)
	{
		p[i] = 1;
	}

	// Sieve
	// we are traversing from 3 and adding 2 to it each time as we need to traverse all the odd numbers 
	for(ll i=3 ; i<=1000000 ;i+=2)
	{
		// if the current number is not marked (it is prime)
		
		if(p[i] == 1)
		{
			// mark all the multiples of i as not prime
			
			for(ll j = i*i; j<=1000000 ;j+=i)
			{
				p[j] = 0;
			}

			// Why we have choosen i*i and not 2*i --> as all the number b/w i and i*i
			// will already be marked if i is larger than 2,3,5... 
			// if i=2 ---> i*i = 4
			// if i=3 ---> i*i = 9
			// if i=5 ---> i*i = 25
			// if i=7 ---> i*i = 49
		}
	}

	//special cases
	p[2] = 1;
	p[1] = p[0] =0;
}
int main()
{
	int n;
	cin>>n;

	int p[1000005] = {0};
	prime_sieve(p);

	//lets print prime upto range n

	for(int i=0 ; i <= n ; i++)
	{
		if(p[i] == 1)
		{
			cout << i <<" ";
		}
	}
}