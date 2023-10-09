class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int>ans(2 ,-1); 
     int l =0 ,r=nums.size()-1; 
      while(l<=r)
      {
          int mid = l+(r-l)/2; 
          if (nums[mid]==target)
          {
              ans[0] = mid; 
              r=mid-1; 
          }
          else if (nums[mid]>target)
              r = mid-1; 
          else 
              l = mid+1; 
          
      }
      l =0 ,r =nums.size()-1;
        while(l<=r)
      {
          int mid = l+(r-l)/2; 
          if (nums[mid]==target)
          {
              ans[1] = mid; 
              l=mid+1; 
          }
          else if (nums[mid]>target)
              r = mid-1; 
          else 
              l = mid+1; 
          
      }
    return ans; 
    }
};