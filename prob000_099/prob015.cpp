/*
Michael-Patrick English
Date: 05 MArch 2016 
Project Euler
Problem 15


Starting in the top left corner of a 2Ã2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.


How many such routes are there through a 20Ã20 grid?

*/

#include	<stdlib.h>
#include	<stdio.h>

int numPaths(int gridSize, int xpos, int ypos)
{

if( (xpos == gridSize) || (ypos == gridSize))
	return 1;

if( xpos == ypos)
	return 2 * numPaths(gridSize, xpos+1, ypos);

return numPaths(gridSize, xpos+1, ypos) + numPaths(gridSize, xpos, ypos+1);

}



int main(int argc, char** argv)
{

printf( "The answer is %i \n", numPaths(1,0,0));
printf( "The answer is %i \n", numPaths(2,0,0));
printf( "The answer is %i \n", numPaths(4,0,0));
printf( "The answer is %i \n", numPaths(20,0,0));

return 1;
}
