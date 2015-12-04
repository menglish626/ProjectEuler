/*
Michael-Patrick English
November 22, 2015
Project Euler
Problem 3:

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<math.h>


long gpf(long n)
{
long maxdiv = sqrt(n);

long divisor = 2;

while(divisor < maxdiv)
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

printf("%li\n",gpf(600851475143));

}
