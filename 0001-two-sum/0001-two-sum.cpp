class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int,vector<int>>mp;  
     
      for (int i=0;i<nums.size();i++)
      { 
         int x = target  - nums[i]; 
         if (find(nums.begin() , nums.end() ,x)!=nums.end())
         {
             int ind = find(nums.begin() , nums.end() ,x) - nums.begin(); 
             if (ind!=i)
             {
                 return {ind , i}; 
             }
         }
      }
      return {};  
    }
}; 