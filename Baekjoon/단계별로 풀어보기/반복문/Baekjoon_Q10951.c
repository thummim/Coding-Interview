#include <stdio.h>

int main()
{
    int A = 0;
    int B = 0;
    
    while ( scanf("%d %d", &A, &B) != -1 )
    {
       printf("%d\n", A+B);
    }
    
    return 0;
}
