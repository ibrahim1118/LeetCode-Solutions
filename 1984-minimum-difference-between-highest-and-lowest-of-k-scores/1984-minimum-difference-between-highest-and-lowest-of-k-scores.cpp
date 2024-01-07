class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin()  , nums.end()); 
        int ans = 1e9; 
        for (int i=0  ,j=i+k-1;j<nums.size();j++ , i++)
        {
            ans = min(ans , nums[j] - nums[i]); 
        }
        return ans; 
    }
};