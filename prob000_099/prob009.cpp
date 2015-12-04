/*
Michael-Patrick English
Date: 26 November 2015 
Project Euler
Problem 9:

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc. 


*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<math.h>

int main(int argc, char** argv)
{

float b, c, a = 1;
while(true)
	{
	b = 1;
	bool found = false;
	while(true)
		{
		c = sqrt(a*a + b*b);				
		found = (a+b+c == 1000);
		if(found){break;}		
		if(a+b+c > 1000){break;}
		b++;
		}
	if(found){break;}
	a++;
	}

printf("a: %f\nb: %f\n c: %f\n",a,b,c);
printf("%f\n",a*b*c);

return 1;
}
