class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
      vector<int>vis(n+1); 
      vector<string>ans; 
      int a =0; 
      for (auto i : target)
            vis[i]++; 
      for (int i=1;i<=n;i++)
      {
          if (vis[i])
              ans.push_back("Push") ,a++; 
          else 
          {
              ans.push_back("Push"); 
              ans.push_back("Pop"); 
          }
          if (a==target.size())
              break; 
      }
      return ans; 
    }
};