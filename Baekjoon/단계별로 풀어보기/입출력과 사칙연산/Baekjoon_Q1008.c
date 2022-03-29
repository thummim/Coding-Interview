#include <stdio.h>

int main()
{
    short a,b;
    scanf("%d %d", &a, &b);
    printf("%.9f\n", (double)a / b); // 절대오차를 보정하여 출력
    
    return 0;
}
