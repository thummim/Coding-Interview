#include <stdio.h>

int main()
{
    int a,b;
    
    scanf("%d %d", &a, &b); // 두 수 입력
    
    //각각 조건에 맞게 입력된 수를 기반으로 출력한다.
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d", a%b);
    
    return 0;  
    
}
