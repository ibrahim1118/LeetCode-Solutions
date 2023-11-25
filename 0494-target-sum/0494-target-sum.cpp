class Solution {
public:
    vector<int>nums; 
    int t ; 
    int n;
    int ans =0; 
    int findTargetSumWays(vector<int>& num, int target) {
        t = target ;
        nums = num; 
        solve(0 ,0); 
        return ans; 
    }
    void solve(int i  , int sum)
    {
        if (i==nums.size())
        {
            if (sum==t)
                 ans++; 
            return; 
        }
        solve(i+1 , sum+nums[i]); 
        solve(i+1 , sum-nums[i]);
        
    }
    
};