class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       vector<int>dp(cost.size()+2,0);
       for (int i=3;i<=cost.size()+1;i++)
       {
           
           dp[i]+=min(dp[i-1]+cost[i-2] ,dp[i-2]+cost[i-3]); 
       }
       return dp[cost.size()+1]; 
        
    }
};