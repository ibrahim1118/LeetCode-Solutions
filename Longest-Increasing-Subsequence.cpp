class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans =0 ; 
        int n = nums.size(); 
        vector<int>dp(n ,1); 
        for (int i =0;i<n;i++)
        {
            for (int j=0;j<i;j++)
            {
                if (nums[i]>nums[j])
                  dp[i] = max(dp[i] , dp[j]+1); 
            }
        }
        for (auto i: dp)
        ans = max(i , ans); 
        return ans; 
    }
};