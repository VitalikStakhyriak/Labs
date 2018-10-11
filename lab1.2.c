#include <stdio.h>

int main()
{
    int m, n;
    
    printf("Give the number for n\n");
    scanf("%d", &n);
    printf("Give the number for m\n");
    scanf("%d", &m);
    
    printf("Result = %d\n", ++n*++m);
    printf("%s\n", m++<n? "True":"False");
    printf("%s\n", n++>m? "True":"False");
    
    return 0;
}
