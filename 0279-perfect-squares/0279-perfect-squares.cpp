class Solution {
public:
    vector<int>dp; 
    int numSquares(int n) {
        dp.resize(n+1 , -1); 
        return solve(n); 
    }
    int solve(int n)
    {
        if (n<4)
             return n;
        if (dp[n]!=-1)
              return dp[n]; 
        int ans = n;
        for (int i=1;i*i<=n;i++)
        {
            ans = min(ans , 1+solve(n-i*i));
        }
       return dp[n] = ans; 
    }
};