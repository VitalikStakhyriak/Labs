#include <stdio.h>
#include <math.h>
int main()
{
    int i = 0, sum = 0;
    for(i = 2; i < 100; i += 2)   
    {    
        sum += i;
    }       
    printf("Sum of all even numbers from 0 to 100 = %d\n", sum);
    return 0;
}
