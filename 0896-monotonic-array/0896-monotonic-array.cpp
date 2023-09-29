class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      bool a =false  ,b = false;
      for (int i=1;i<nums.size();i++)
      {
          if (nums[i]>nums[i-1])
              a=true; 
          if (nums[i]<nums[i-1])
              b=true; 
      }
      return !(a&&b); 
    }
};