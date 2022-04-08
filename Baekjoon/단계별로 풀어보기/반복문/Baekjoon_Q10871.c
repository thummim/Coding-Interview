#include <stdio.h>

int main()
{
    int N = 0;
    int X = 0;
    int A = 0;

    scanf ("%d %d", &N, &X); // N과 X입력

    for(int i=1; i<=N; i++)
    {
        scanf ("%d", &A);
        if(A < X) // X보다  수를 모두 출력
        printf("%d ", A);
    }
    
    return 0;
    
}

