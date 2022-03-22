#include <bits/stdc++.h>

class Solution {
public:
    string getSmallestString(int n, int k) {
        
        string s = "";
        int sum = n;
        vector<int> a(n, 1);
        int idx = n - 1;
    
        while(sum != k)
        {
            sum = 0;
            if( (k-sum) <= 25 )
            {
                a[idx] = (k-sum); 
            }
            else if( (k-sum) > 25)
            {
                a[idx] = ('z' - 97);
            }
                        
            idx--;
            
            if (idx == -1)
                break;
            
            for(int i = 0; i < n; i++)
            {
                sum += a[i];
            }
            
            if(sum == k)
                break;
        }
        
        for(int i = 0; i < n; i++)
        {
            s[i] = a[i] + 96;
        }
        
        return s;
        
    }
};
