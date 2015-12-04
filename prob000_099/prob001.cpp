/*
Michael-Patrick English
Project Euler
Problem 1:
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include	<stdlib.h>
#include	<stdio.h>

int partialSum(int b, int N)
{

int sum = 0;
int i = 1;
int tmp = b*i++;

while( tmp < N)
	{
	sum += tmp;
	tmp = b*i++;
	}

return sum;

}



int main(int argc, char** argv)
{

int ans = partialSum(3,1000) + partialSum(5,1000) - partialSum(15,1000);

printf("%i\n", ans);

return 1;
}
