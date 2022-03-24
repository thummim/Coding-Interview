#include <bits/stdc++.h>
using namespace std;
int a[9];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    for(int i = 0; i < 9; i++) cin >> a[i]; // 난쟁이들의 키 입력

    sort(a, a + 9); // 오름차순으로 정렬
    
    do{
        int sum = 0;
        for(int i = 0; i < 7; i++) sum += a[i];
        if (sum == 100)break;
    }while(next_permutation(a, a+9)); // 100이 넘지 않도록 반복
    for(int i = 0; i < 7; i++) cout << a[i] << "\n";
    return 0;
  
}
