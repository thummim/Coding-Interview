#include <bits/stdc++.h>
using namespace std;

int A, B, C, ret, cnt[104], Arr, Dep;

int main()
{
    cin >> A >>  B >> C; // 주차요금 A,B,C 입력
    
    for(int i = 0; i < 3; i ++)
    {
        cin >> Arr >> Dep;
        for( int j = Arr; j < Dep; j++) cnt[j]++; // 주차장 주차시간과 도착시간 입력
    }
    
    for(int j = 1; j < 101; j++)
    {
        if(cnt[j] == 1) ret += A;               // 1대인 경우 요금 A
        else if(cnt[j] == 2) ret += B * 2;      // 2대인 경우 요금 B
        else if (cnt[j] == 3) ret += C * 3;     // 3대인 경우 요금 C
    }
    
    cout << ret << "\n";
    
    return 0;
}
