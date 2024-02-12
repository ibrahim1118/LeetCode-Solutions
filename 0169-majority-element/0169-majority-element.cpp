class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int ,int>mp; 
        for (auto i : nums)
        {
            mp[i]++; 
            if(mp[i]>=(nums.size()+1)/2)
                  return i; 
        }
        return -1;
    }
};