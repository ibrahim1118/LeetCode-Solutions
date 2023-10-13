class Solution {
public:
     vector<int>dp;  
    int minCostClimbingStairs(vector<int>& cost) {
          dp.resize(cost.size(),-1); 
          return min(solve(0,cost,dp) , solve(1,cost, dp)); 
    }
    int  solve(int i , vector<int> cost , vector<int>&dp)
    {
        if (i>=cost.size())
        {
               return 0; 
        }
        if(dp[i]!=-1)
            return dp[i]; 
        dp[i] = min(solve(i+1,cost ,dp) , solve(i+2,cost,dp))+cost[i]; 
        return dp[i]; 
    }
    
};