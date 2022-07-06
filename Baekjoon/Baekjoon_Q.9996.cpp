#include<bits/stdc++.h> 
using namespace std;  
#define first f
#define second s 
int n; 
string s, ori_s, pre, suf; 

int main()
{
    cin >> n;
    cin >> ori_s;  
    int pos = ori_s.find('*');  
    pre = ori_s.substr(0, pos); // 접두사
    suf = ori_s.substr(pos + 1);  // 접미사
    for(int i = 0; i < n; i++)
    {
        cin >> s; 
        if(pre.size() + suf.size() > s.size()) //사이즈 체크
        {
            cout << "NE\n";
        }
        else
        {
            bool flag2 = 1; 
            for(int j = 0; j < pre.size(); j++)
                if(s[j] != pre[j])
                    flag2 = 0; 
            for(int j = 0; j < suf.size(); j++)
                if(s[s.size() - suf.size() + j] != suf[j])
                    flag2 = 0; 
            
            if(!flag2)
                cout << "NE\n";
            else 
                cout << "DA\n"; 
        } 
    } 
    return 0;
} 
