class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ma1 = max(nums[0] , nums[1]); 
        int ma2 = min(nums[0] , nums[1]); 
        for (int i=2;i<nums.size();i++)
        {
            if (nums[i]>ma1)
            {
                ma2 = ma1 ; 
                ma1 = nums[i]; 
            }
            else if (nums[i]>ma2)
                ma2 = nums[i]; 
        }
        ma1-- , ma2--; 
        return ma1*ma2; 
    }
};