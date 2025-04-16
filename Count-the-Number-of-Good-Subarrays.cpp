class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        long long ans =0 ; 
        unordered_map<int,int>mp; 
        int x =0 ; 
        for (int i =0, j=0 ;i<nums.size();i++)
        {
                 while(j<nums.size()&&x<k)
                 {
                    x+=mp[nums[j]]; 
                    mp[nums[j]]++; 
                    j++; 
                 }
                 if (x>=k)
                 ans+=nums.size()-j+1; 
                 x-=mp[nums[i]]-1; 
                 mp[nums[i]]--; 
        }
        return ans; 
    }
};