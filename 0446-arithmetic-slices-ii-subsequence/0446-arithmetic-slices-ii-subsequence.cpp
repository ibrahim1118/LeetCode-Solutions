class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
       map<pair<int,long long > ,int> dp; 
       int ans =0; 
       for (int  i=0;i<nums.size();i++)
       {
           for (int j=0;j<i;j++)
           {
               long long a = nums[i]  , b  = nums[j]; 
               long long  diff =a-b; 
               dp[{i ,diff}]++; 
               if (dp.count({j,diff}))
               {
                   dp[{i , diff}]+=dp[{j,diff}]; 
                   ans+=dp[{j , diff}]; 
               }
           }
       }
       
      return ans; 
    }
};