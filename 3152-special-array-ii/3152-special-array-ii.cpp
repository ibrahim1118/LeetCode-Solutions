class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
      int n = nums.size(); 
      vector<int>pre(n); 
      pre[0]=1;
      for (int i=1;i<n;i++)
      {
          if (nums[i]%2+nums[i-1]%2==1)
          {
              pre[i]=1; 
          }
      }
      for (int i=1;i<n;i++)
      {
          pre[i]+=pre[i-1]; 
      }
      for (auto i: pre)
          cout<<i<<" ";
      vector<bool>ans; 
      for (auto i: queries)
      {
         
              if (pre[i[1]]-pre[i[0]] == i[1]-i[0])
                  ans.push_back(true); 
              else 
                  ans.push_back(false); 
          
      }
        return ans;
    }
};