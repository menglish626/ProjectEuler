/*
Michael-Patrick English
Date: 20160805
Project Euler
Problem 14


*/

#include	<stdlib.h>
#include	<stdio.h>

unsigned long lattice_paths(unsigned long len, unsigned long wid)
    {
    
    unsigned long** opt = (unsigned long**) malloc(sizeof(unsigned long*)*(len+1));
    for(unsigned long i=0; i<=len; i++)
        {
        opt[i] = (unsigned long*) malloc(sizeof(unsigned long)*(wid+1));
        }

    for(unsigned long i=1; i<=len; i++)
        {
        opt[i][0] = 1;
        }
    for(unsigned long i=1; i<=wid; i++)
        {
        opt[0][i] = 1;
        }
    opt[0][0] = 0;
    
    for(unsigned long i=1; i<=len; i++)
        {
        for(unsigned long j=1; j<=wid; j++)
            {
            opt[i][j] = opt[i-1][j] + opt[i][j-1];
            }
        }

    return opt[len][wid];
    } 

int main(int argc, char** argv)
{

printf("%lu\n",lattice_paths(20,20));


return 0;
}
