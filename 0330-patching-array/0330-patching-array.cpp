class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
      long long  curr =1; 
      int ans =0; 
      int i =0; 
      while(curr<=n)
      {
          if (i<nums.size()&&nums[i]<=curr)
          {
              curr+=nums[i];
              i++; 
          }
          else 
          {
              ans++; 
              curr*=2; 
          }
      }
      return ans;
    }
};