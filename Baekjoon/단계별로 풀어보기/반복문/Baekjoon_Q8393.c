#include <stdio.h>

int main()
{
    int n;
    int result = 0;
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) // 1부터 n까지 구해야 하기 때문에 i에 1을 넣어준다
    {
        result = result + i;
    }
    
    printf("%d", result);
    
    return 0;
        
}
