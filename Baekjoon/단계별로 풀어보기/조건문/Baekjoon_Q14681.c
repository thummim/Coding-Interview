#include <stdio.h>

int main(){
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    if(x>0 && y>0) printf("1"); // x,y가 둘 다 양수면 1사분면
    else if(x<0 && y>0) printf("2"); // x가 음수이고 y가 양수면 2사분면
    else if(x<0 && y<0) printf("3"); // x,y가 둘 다 음수면 3사분면
    else if(x>0 && y<0) printf("4"); // x가 양수이고 y가 음수면 4사분면
    
    return 0;  
}
