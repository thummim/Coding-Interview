#include <bits/stdc++.h>
using namespace std;
string s, s2;

int main()
{
    cin >> s; // 문자열 입력 받음
    
    s2 = s; // 입력 받은 문자열을 뒤집어서 비교하기 위해 다른 문자열에 넣음
    
    reverse(s2.begin(), s2.end()); // reverse로 string 배열을 뒤집음
 
    if(s == s2) cout << "1"; // 거꾸로 읽어도 똑같으면 팰린드롬이므로 1을 출력
    else cout << "0"; // 팰린드롬이 아니라면 0을 출력
}
