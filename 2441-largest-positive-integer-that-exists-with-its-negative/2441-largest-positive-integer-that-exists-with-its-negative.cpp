class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mp; 
        for (auto i: nums)
        {
            if (i<0)
                mp[abs(i)]++; 
        }
        int ans =-1;
        for (auto i : nums)
        {
            if (i>0)
            {
                if (mp[i])
                    ans = max(ans , i); 
            }
        }
        return ans; 
    }
};