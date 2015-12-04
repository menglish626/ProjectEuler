/*
Michael-Patrick English
Date: 
Project Euler
Problem 
A palindromic number reads the same both ways. 
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

*/

#include	<stdlib.h>
#include	<stdio.h>
#include 	<string>
#include	<algorithm>

using namespace std;

bool isPalindrome(int num)
{
string strNum = to_string(num);
string revStr = strNum;

reverse(revStr.begin(),revStr.end());

return revStr == strNum;

}

int main(int argc, char** argv)
{

int a = 999, b = 0;

int curMax = 101;

while( a > 99 )
	{
	b = a;
	while(b > 99)
		{
		int tmp = a*b;
		if( tmp > curMax)
			{
			if(isPalindrome(tmp)){curMax = tmp;}
			}
		b--;
		}
	a--;
	}	
printf("%i\n",curMax);

return 1;
}
