/*
Michael-Patrick English
Date: 
Project Euler
Problem:
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

*/

#include	<stdlib.h>
#include	<stdio.h>



int main(int argc, char** argv)
{

int sqSum = 0, sumSq = 0;
int maxi = 100;


for(int i=1; i <= maxi; i++)
	{
	sumSq += i*i;
	sqSum += i;

	}

sqSum = sqSum*sqSum;

int diff = sqSum - sumSq;

printf("%i\n", diff);

return 1;
}
