class Solution {
public:
    
    int recursion(int n, int cur ,vector<vector<int>>&dp )
    {    
        if (n == 0 || cur == 0)
            return 1;
        if (dp[n][cur] != -1)
            return dp[n][cur];
        if (cur > n)
            return dp[n][cur] = recursion(n , cur - 1,dp);
        else
            return dp[n][cur] = max(recursion(n , cur - 1,dp), cur * recursion(n - cur, cur,dp));
    }
    
    int integerBreak(int n) 
    {
        vector<vector<int>>dp(59 , vector<int>(59,-1)); 
        return recursion(n, n - 1,dp);    
    }
};