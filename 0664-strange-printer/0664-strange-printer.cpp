class Solution {
public:
    string ss ;
    vector<vector<int>>dp; 
    int strangePrinter(string s) {
        dp.resize(104 ,vector<int>(105 , -1)); 
        return solve(0 , s.size()-1 , s); 
    }
    int solve(int i  , int j , string &s)
    {
        if (i>j)
            return 0 ; 
        if (~dp[i][j])
            return dp[i][j]; 
        int st = 1+ solve(i+1 , j  , s); 
        for (int k = i+1;k<=j;k++)
        {
            if (s[i]==s[k])
            {
                st = min(st , solve(i , k-1 , s)+ solve(k+1 , j ,s  )); 
            }
        }
        return dp[i][j] = st ; 
    }
};