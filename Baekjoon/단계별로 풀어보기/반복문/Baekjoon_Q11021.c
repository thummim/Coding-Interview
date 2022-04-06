#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int T = 0;
    int result = 0;
    
    scanf("%d", &T); // 테스트케이스 개수 입력
    
    for(int i=1; i<=T; i++)
    {
        scanf("%d %d", &A,&B);
        result = A+B;
        printf("Case #%d: %d\n", i, result);
    }
    
    return 0;
}
