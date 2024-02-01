class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
     sort(nums.begin() , nums.end()); 
     vector<vector<int>>ans; 
     for (int i=0,j=2;j<nums.size();i+=3,j+=3)
     {
         if (nums[j]-nums[i]<=k)
             ans.push_back({nums[i], nums[i+1] , nums[j]}); 
         else 
         {
             ans.clear(); 
             return ans; 
         }
     }
     return ans;
    }
};