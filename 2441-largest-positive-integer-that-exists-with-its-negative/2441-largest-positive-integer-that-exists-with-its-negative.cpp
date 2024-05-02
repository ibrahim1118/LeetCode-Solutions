class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int>mp; 
        sort(nums.begin() , nums.end()); 
        int ans = -1;
        for (auto i: nums)
        {
            if (i<0)
                mp[abs(i)]++; 
             if (i>0)
            {
                if (mp[i])
                    ans = max(ans , i); 
            }
        }
        return ans; 
    }
};