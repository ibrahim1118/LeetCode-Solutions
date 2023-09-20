class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>ans; 
       vector<int> aa = nums; 
       int a ,b; 
       sort(nums.begin(),nums.end()); 
       for (int i=0,j=nums.size()-1;i<j;)
       {
           if (nums[i]+nums[j]== target)
           {
               a= nums[i]; 
               b= nums[j]; 
               break;
           }
           else if (nums[i]+nums[j]>target)
           {
               j--; 
           }
           else 
           {
              i++;
           }
       }
        for (int i=0;i<nums.size();i++)
        {
            if (a==aa[i])
              { ans.push_back(i);
                   break; 
              } 
        }
        for (int i=nums.size()-1;i>=0;i--)
        {
            if (b==aa[i])
              { 
                  ans.push_back(i);
                  break;  
              }
        }
      return  ans; 
    }
};