class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+10 ,-1); 
        return solve(nums , target , dp); 
    }
    int solve(vector<int>nums , int t ,vector<int>&dp)
    {
        if (t==0)
           return 1; 
        if (t<0)
           return 0;
        if (dp[t]!=-1)
           return dp[t]; 
        int ans =0; 
        for (auto i : nums)
        {
            ans+=solve(nums , t-i , dp); 
        } 
        return dp[t] = ans; 
    }
};