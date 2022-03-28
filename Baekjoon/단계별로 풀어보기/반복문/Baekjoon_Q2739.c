#include <stdio.h>

int main()
{
    int n = 0;
    int i;
    scanf("%d", &n); // 출력할 구구단 숫자 입력
    
    for(i=1; i<10; ++i)
    {
        printf("%d * %d = %d\n", n, i, n*i); // 해당 숫자를 1에서부터 9까지 곱하며 출력
    }
    
    return 0;
}
