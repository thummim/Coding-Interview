#include <stdio.h>

int main()
{
    short a,b;
    scanf("%d %d", &a, &b);
    printf("%.9f\n", (double)a / b);
    
    return 0;
}
