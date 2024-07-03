class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size()<=4)
              return 0;
        sort(nums.begin() , nums.end()); 
        int ans =2e9+1;
        int n = nums.size(); 
        ans = min(ans , nums[n-4] - nums[0]);
        ans = min(ans , nums[n-3] - nums[1]);
        ans = min(ans , nums[n-2] - nums[2]);
        ans = min(ans , nums[n-1] - nums[3]); 
        return ans ;
        
    }
};