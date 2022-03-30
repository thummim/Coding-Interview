#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a); // 시험 점수 입력
    
    if(a <= 100 && a >= 90) printf("A");        // 90~100점은 A
    else if(a <= 89 && a >= 80) printf("B");    // 80~89점은 B
    else if(a <= 79 && a >= 70) printf("C");    // 70~79점은 C
    else if(a <= 69 && a >= 60) printf("D");    // 60~69점은 D
    else printf("F");                           // 나머지는 F
    
    return 0;
}
