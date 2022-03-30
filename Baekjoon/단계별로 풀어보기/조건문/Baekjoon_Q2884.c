#include <stdio.h>

int main(){
    int Hour, Minute;
    Hour = 0;
    Minute = 0;
    scanf("%d %d", &Hour, &Minute);
    if(Hour >= 0 || Hour <= 23 && Minute >= 0 || Minute <= 59) //0~23시간 그리고 0~59분일 때만 계산
    {
        if(Hour > 0 && Minute > 44) // 45분이 넘어가면 그냥 분에서만 뺀다
        {
            Minute = Minute - 45;
        }
        else if(Hour > 0 && Minute <= 44) // 45분이 넘어가면 시간도 같이 빼주어야 한다
        {
            --Hour;
            Minute = Minute + 60;
            Minute = Minute - 45;
        }
        else if(Hour == 0 && Minute <= 44) // 만약 0시 알람인 경우 45분을 빼면 23시가 되어야 한다
        {
            Hour = 23;
            Minute = Minute + 60;
            Minute = Minute - 45;
        }
        else if(Hour == 0 && Minute > 44) // 0시 알람이지만 44분이 넘어가는 경우
        {
            Minute = Minute - 45;
        }
    }
  else
  {
    printf("시간이 잘못 입력되었습니다!");
    return 1;
  }
  
    printf("%d %d", Hour, Minute);
    
    return 0;
}
