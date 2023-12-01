class Solution {
public:
    int maxPower(string s) {
        int ans =0 ; 
        int a =1; 
        for (int i=0;i<s.size()-1;i++)
        {
            if (s[i]==s[i+1])
                a++; 
            else 
                ans = max(ans , a) , a=1; 
        }
        return max(ans , a); 
    }
};