class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
      vector<int>dp(nums.size(),1); 
      vector<int>dp2(nums.size(),1);
      for (int i=1;i<nums.size();i++)
      {
          for (int j=0;j<i;j++)
          {
              if (nums[i]>nums[j])
                  dp[i]=max(dp[i], dp[j]+1); 
          }
      }
     for(int i=nums.size()-1;i>=0;i--)
        {
            for(int j=nums.size()-1;j>i;j--)
            {
                if(nums[j]<nums[i])
                {
                    dp2[i]= max(dp2[i],1+dp2[j]);
                }
            }
     }
      for (auto i: dp)
          cout<<i<<" "; 
        cout<<endl; 
      for (auto j: dp2)
          cout<<j<<" "; 
        cout<<endl; 
      int mx =0 ; 
    
      for(int i=0;i<nums.size();i++)
      {
          cout<<dp[i]<<" "<<dp2[i]<<endl; 
          if (dp[i]!=1&&dp2[i]!=1)
          {
              //cout<<dp[i]<<" "<<dp2[i]<<endl; 
              mx= max(mx , dp[i]+dp2[i]-1); 
          }
      }
      cout<<mx; 
       return nums.size()-mx; 
      
    }
};