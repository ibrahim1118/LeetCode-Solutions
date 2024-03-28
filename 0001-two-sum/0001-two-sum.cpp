class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,int>mp;  
         //x   i
      for (int i=0;i<nums.size();i++)
      { 
         int x = target  - nums[i]; 
         if (mp.count(x)&&mp[x]!=i)
         {
            return {mp[x] , i};
         }
         mp[nums[i]]=i; 
      }
      return {};  
    }
}; 