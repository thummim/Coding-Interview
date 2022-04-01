#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    int T = 0;
    
    scanf("%d", &T);
    
    for (int i =0; i < T; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    
    return 0;
   

}

