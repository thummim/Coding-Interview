#include <bits/stdc++.h>
using namespace std;

string S;
int Alphabet[26];

int main()
{
//입출력 동기 해제
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    //문자열 입력
    getline(cin, S);
    
    
    for(char a : S) // 입력받은 문자열의 개수만큼 순회
    {
        Alphabet[a - 'a']++;  // 아스키코드를 빼주어서 0에서 25까지 사용하도록 함
    }
    
    for(int i = 0; i < 26; i++ )
    {
        cout << Alphabet[i] << " "; // 각 알파벳 단어의 개수 출력 
    }
    
    return 0;
}
