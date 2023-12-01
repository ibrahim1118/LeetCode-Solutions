class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans =0 ; 
        for (int i=0;i<nums.size();i++)
        {
            bitset<32>b = i; 
            if (b.count()==k)
                ans+=nums[i]; 
        }
        return ans; 
        }
};