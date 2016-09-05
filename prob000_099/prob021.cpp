#include    <stdlib.h>
#include    <stdio.h>
#include    <math.h>

unsigned int sum_of_divisors(unsigned int num)
    {
    unsigned int sum = 1;

    for(unsigned int i=2; i<((unsigned int) floor(sqrt((double) (num)))); i++)
        {
        if((num % i) == 0)
            {
            sum += i;
            if((num / i) != i){sum += (num / i);}
            }
        }

    return sum;

    }


int main()
    {

    printf("%u\n",sum_of_divisors(220));
    printf("%u\n",sum_of_divisors(284));
    
    unsigned int sum = 0;

    for(unsigned int i=0; i<10000; i++)
        {
        if((sum_of_divisors(sum_of_divisors(i)) == i) && (sum_of_divisors(i) != i))
            {
            sum += i;
            }
        }
    
    printf("%u\n",sum);

    return 0;
    }
