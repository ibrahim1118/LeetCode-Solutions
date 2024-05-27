class Solution {
public:
    int specialArray(vector<int>& nums) {
     map<int, int>mp; 
    for (auto i : nums)
        mp[i]++; 
    for (int i=0;i<=nums.size();i++)
    {
        int a =0; 
        for (auto j : mp)
        {
            if (j.first>=i)
                 a+=j.second;         
        }
        if (i==a)
            return a; 
    }
        return -1; 
    }
};