class Solution {
public:
    vector<int>dp; 
    map<string, int>mp; 
    int minExtraChar(string s, vector<string>& dictionary) {
        for (auto i: dictionary)
            mp[i]++; 
        dp.resize(60 , -1);
        return solve(0 , s); 
    }
    int solve(int i , string s)
    {
        if (i>=s.size())
            return 0 ; 
        if (~dp[i])
            return dp[i]; 
        string x = ""; 
        int ans = 52 ; 
        for (int j =i;j<s.size();j++)
        {
            x+=s[j]; 
            int a =x.size(); 
            if(mp[x]>0)
                ans = min(ans ,  0+solve(j+1 , s)); 
            else 
                ans= min(ans ,a+solve(j+1 ,s)); 
        }
        return dp[i] = ans ;
    }
};