class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>mp(nums.size()); 
        for (auto i : nums)
        {
            mp[i]++; 
            if (mp[i]==2)
               return i; 
        }
        return -1; 
    }
};