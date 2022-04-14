#include <stdio.h>

int main()
{
    int A,B,C;
    int arr[10] = {0, }; // 배열 초기화
    int sum;
    
    scanf("%d %d %d", &A,&B,&C);
    sum = A*B*C; // 입력받은 수를 모두 곱한다
    
    int n;
    while(sum>0) // 각 자릿수에 무슨 숫자가 사용되었는지 판별하고 배열에 저장해준다
    {
        n = sum % 10; 
        arr[n]++;
        sum /= 10;
    }
    
    for(int i=0; i<10; i++)
    {
    printf("%d\n", arr[i] ); // 1~9까지 각 배열 출력
    }
    
    return 0;
}
