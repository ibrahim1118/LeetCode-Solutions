class Solution {
public:
    const int mod=1e9+7;
    int numWays(int steps, int arrLen) {
      int n = min(steps/2+1 , arrLen); 
      vector<vector<int>>dp(steps+1, vector<int>(n+1 , -1)); 
      return solve(0 , steps,n, dp);
    }
    int solve(int i  , int steps,int n ,vector<vector<int>>&dp)
    {
        if (steps==0)
        {
            if (i==0)
            {return 1 ; }
            else 
            {return 0;} 
        }
        if (dp[steps][i]!=-1)
              return dp[steps][i]; 
        long long  ans = solve(i , steps-1,n ,dp)%mod;
        if (i<n-1)
              ans+=solve(i+1 , steps-1,n,dp)%mod; 
        if (i>0)
            ans+=solve(i-1 , steps-1,n ,dp)%mod; 
        return dp[steps][i] =ans%mod; 
        
    }
};






