/*
Michael-Patrick English
Date: 23 November 2015
Project Euler
Problem 5: 
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<math.h>

int gpf(long n)
{
int maxdiv = sqrt(n);

int divisor = 2;

while(divisor <= maxdiv)
	{
	if(n == divisor){break;}
	if(n % divisor == 0){
		n = n/divisor;
	}else{
		divisor++;
		} 
	}

return n;

}

int main(int argc, char** argv)
{
int n = 1;
int i = 2;
int maxi = 20;

while( i <= maxi)
	{
	if(n % i != 0)
		{
		int tmp = gpf(i);
		printf("%i : %i\n", i, tmp);
		n *= tmp;
		}
	i++;
	}	

printf("%i\n",n);

return 1;
}
