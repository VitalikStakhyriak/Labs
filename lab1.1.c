#include <stdio.h>
#include <math.h>
int main()
{
    int x;
    float a1, b1, c1;
    double a2, b2, c2;
    long double a3, b3, c3;
    
    printf(" Please choose the type of data: type 1 for float, 2 - double, 3 - long double\n");
    scanf("%d", &x);
    
    if (x == 1)
    {
        printf("Give the number for a\n");
        scanf("%f", &a1);
        printf("Give the number for b\n");
        scanf("%f", &b1);
        
        c1 = (pow((a1 - b1), 2) - (pow(a1, 2) - 2*a1*b1)) / pow(b1, 2);
        printf("Result for float = %f\n", c1);
    }
    else if (x == 2)
    {
        printf("Give the number for a\n");
        scanf("%lf", &a2);
        printf("Give the number for b\n");
        scanf("%lf", &b2);
        
        c2 = (pow((a2 - b2), 2) - (pow(a2, 2) - 2*a2*b2)) / pow(b2, 2);
        printf("Result for double = %lf\n", c2);
    }
    else if (x == 3)
    {
        printf("Give the number for a\n");
        scanf("%Lf", &a3);
        printf("Give the number for b\n");
        scanf("%Lf", &b3);
        
        c3 = (pow((a3 - b3), 2) - (pow(a3, 2) - 2*a3*b3)) / pow(b3, 2);
        printf("Result fot long double = %Lf\n", c3);
    }
    else
    {
        printf("Error. You gave a wrong number!\n");
    }
    return 0;
}
