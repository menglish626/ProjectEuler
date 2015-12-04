/*
Michael-Patrick English
Date: 26 November 2015 
Project Euler
Problem:
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

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
int N = 10001;
int cnt = 0;
int i = 1;


printf("%i\n",isPrime(2)); 
printf("%i\n",isPrime(3)); 
printf("%i\n",isPrime(9)); 

while(cnt < N)
	{
	if(isPrime(++i)){cnt++;}
	}

printf("%i\n",i); 

return 1;
}
