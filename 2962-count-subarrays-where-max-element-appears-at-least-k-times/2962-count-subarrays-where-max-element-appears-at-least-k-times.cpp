class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
       int mx =0; 
       for (auto i : nums)
           mx = max(i , mx); 
       unordered_map<long long ,long long>mp;
        int i=0 , j=0; 
        long long ans =0; 
        while(j<nums.size())
        {
            mp[nums[j]]++; 
            while(mp[mx]>=k)
            {
                ans+=nums.size()-j; 
                mp[nums[i]]--; 
                i++; 
            }
            j++; 
        }
        return ans; 
    }
};