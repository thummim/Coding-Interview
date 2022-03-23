#include <bits/stdc++.h>

class Solution {
public:
    int brokenCalc(int startValue, int target) {
       int a, steps = 0, ret = 0;
        
        a = startValue; // a에 시작값을 넣어준다
        
        while(target > a)
        {        
            if(target % 2) // target이 홀수이면 짝수로 만든다
                target++;
            else // target이 짝수이면 2로 나눈다 
                target /= 2;
            
            steps++; // 연산 횟수 저장
        }
        
        ret = steps + startValue - target; 
        
        return ret;
    }
};
