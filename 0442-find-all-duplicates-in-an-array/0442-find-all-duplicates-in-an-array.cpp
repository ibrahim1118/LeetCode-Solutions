class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int>mp;
        vector<int>v; 
        for (auto i : nums)
        {
            if (mp.count(i))
                v.push_back(i); 
            mp[i]++; 
        }
        return v; 
    }
};