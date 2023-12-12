class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        map<int,int>mp; 
        int i =0 ,j=0 ;
        int ans =0; 
        while(i<nums.size())
        {
            mp[nums[i]]++; 
            i++;
            while(j<nums.size()&&mp[nums[i-1]]>k)
            {
                mp[nums[j]]--; 
                j++; 
            }
            ans = max(ans, i-j); 
        }
        return ans; 
    }
};