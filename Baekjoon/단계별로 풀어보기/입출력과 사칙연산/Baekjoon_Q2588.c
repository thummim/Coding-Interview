#include <stdio.h>

int main()
{
    int a,b;
    
    scanf("%d %d", &a, &b);
    
    printf("%d\n", a * (b%10) );        // 3번
    printf("%d\n", a * ((b/10)%10) );   // 4번
    printf("%d\n", a * ((b/100)%10) );  // 5번
    printf("%d", a*b); // 6
}
