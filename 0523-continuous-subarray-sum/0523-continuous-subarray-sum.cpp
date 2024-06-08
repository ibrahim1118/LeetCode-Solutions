class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> mp; 
       mp[0]=-1; 
       int pre =0; 
       for (int i =0;i<nums.size();i++)
       {
           pre+=nums[i];
           int mod = pre%=k; 
           if (mp.count(mod))
           {
               if (i-mp[mod]>1)
                     return true; 
               
           }
           else 
               mp[mod]=i; 
       }
        return false; 
    }
};