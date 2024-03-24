class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      map<int,int>mp; 
        for (auto i : nums)
        {
            if (mp.count(i))
                return i; 
             mp[i]++; 
        }
        return -1; 
    }
};