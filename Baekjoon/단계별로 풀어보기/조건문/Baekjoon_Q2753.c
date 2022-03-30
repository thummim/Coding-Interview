#include <stdio.h>

int main()
{
    int a;
    
    scanf("%d", &a); // 연도 입력
    
    if(a%4 == 0 && a%100 != 0) // 4의 배수이면서 100의 배수가 아닐 때
    {
        printf("1");
    }
    else if(a%400 == 0) // 400의 배수일 때
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
    
    return 0;
}
