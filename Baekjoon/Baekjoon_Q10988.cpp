#include <bits/stdc++.h>
using namespace std;
string s, s2;

int main()
{
    cin >> s;
    
    s2 = s;
    
    reverse(s2.begin(), s2.end());
 
    if(s == s2) cout << "1";
    else cout << "0";
}
