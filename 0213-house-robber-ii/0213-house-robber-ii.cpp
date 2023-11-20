class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int>dp1(nums.size()+1), dp2(nums.size()+1);
        dp1[1] = nums[0]; 
        for (int i =2;i<nums.size();i++)
        {
            dp1[i] = max(dp1[i-1] , dp1[i-2]+nums[i-1]); 
        }
        for (int i =2;i<=nums.size();i++)
        {
            dp2[i] = max(dp2[i-1] , dp2[i-2]+nums[i-1]); 
        }
       
        return max({dp1[dp1.size()-2] , dp2[dp2.size()-1] , dp1[dp1.size()-1]}); 
    }
};