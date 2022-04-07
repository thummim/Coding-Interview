#include <stdio.h>

int main()
{
    int N = 0;
    
    scanf("%d", &N);
    
    for(int i=1; i<=N; i++) //1부터 증가
    {       
       for(int j = 1; j<=i; j++) //1부터 증가
       {
           printf("*");
       }
        printf("\n");
    }
    
    return 0;
}
