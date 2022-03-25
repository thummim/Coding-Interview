#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string players, result;
int n, cnt[26];

int main()
{
    cin >> n; // 몇 명의 선수를 입력 받을건지 입력받는다.
    
    for(int i = 0; i < n; i++)
    {
        cin >> players;
        
        cnt[players[0] - 'a']++;    // 알파벳 카운팅 배열
    } 
    
    for(int i = 0; i < 26; i++)
    {
        if(cnt[i] >= 5) result += i + 'a'; 
    }
    
    if(result.size()) cout << result << "\n";
    else cout << "PREDAJA" << "\n";
}
