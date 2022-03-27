#include <stdio.h>

int main()
{
    int a,b; // 입력받을 두 수 선언
    scanf("%d %d", &a, &b); // 두 수 입력
    
    if(a > b) printf(">"); // a가 b보다 크면 > 출력
    
    if(a < b) printf("<"); // a가 b보다 작으면 < 출력
        
    if(a == b) printf("=="); // a와 b가 같으면 == 출력
  
    return 0;    
}
