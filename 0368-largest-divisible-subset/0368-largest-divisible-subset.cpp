class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
       if (nums.size()<=1)
            return nums; 
        sort(nums.begin() , nums.end()); 
      vector<int>dp(nums.size(), 1); 
      vector<int>pre(nums.size() ,-1); 
      int first =-1;
      int len =0; 
      for (int i=0;i<nums.size();i++)
      {
          for (int j =0;j<i;j++)
          {
              if (nums[i]%nums[j]==0)
              {
                  if (dp[j]+1>dp[i])
                  {
                      dp[i]=dp[j]+1; 
                      pre[i] = j ; 
                      if (dp[i]>len)
                      {   first =i; 
                          len = dp[i]; 
                      }
                  }
              }
          }
      }
    for (auto i : pre)
        cout<<i<<" "; 
    cout<<endl; 
    for (auto i : dp)
        cout<<i<<" "; 
      vector<int>ans; 
    if (first==-1)
    ans.push_back(nums[0]); 
      while(first!=-1)
      {
           ans.push_back(nums[first]); 
           first = pre[first]; 
      }
      return ans; 
    }
};