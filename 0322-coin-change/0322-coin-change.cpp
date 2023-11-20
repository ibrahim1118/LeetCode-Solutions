class Solution {
public:
    vector<int>coin; 
    int coinChange(vector<int>& coins, int amount) {
     vector<int>dp(amount+1 , 1e4+1); 
      dp[0] =0; 
     for (int i=1;i<dp.size();i++)
     {
         for (auto j : coins)
         {
             if (i-j>=0)
                 dp[i] = min(dp[i] , dp[i-j]+1); 
         }
     }
     if (dp[amount]==1e4+1)
            return -1; 
     return dp[amount]; 
    }
};