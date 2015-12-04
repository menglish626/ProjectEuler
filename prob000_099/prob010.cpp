/*
Michael-Patrick English
Date: 26 November 2015 
Project Euler
Problem 10:

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.

*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<math.h>


bool isPrime(int N)
{
int maxi = sqrt(N);
int i = 2;

while(i <= maxi)
	{
	if( N % i++ == 0){return false;}
	}

return true;

}

int main(int argc, char** argv)
{
unsigned maxi = 2000000;
unsigned i = 1;
unsigned long sum = 0;

while(i < maxi)
	{
	if(isPrime(++i)){sum += i;}
	}

printf("%li\n",sum); 

return 1;
}
