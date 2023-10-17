class Solution {
public:
    int ans =true; 
    int s = 1e5; 
    vector<bool>vis;
    vector<vector<int>>adj;
    bool validateBinaryTreeNodes(int n, vector<int>& left, vector<int>& rigt) {
       adj.resize(n); 
       for (int i=0;i<n;i++)
       {
           if (left[i]!=-1)
                 adj[i].push_back(left[i]); 
           if (rigt[i]!=-1)
               adj[i].push_back(rigt[i]); 
       }
      vis.resize(n);
      dfs(0);
        vector<int>v(n);
      for (auto i :left)
      {
          if (i!=-1)
              v[i]++; 
      }
      for (auto i : rigt )
      {
          if (i!=-1)
              v[i]++; 
      }
      int z =0 , a=0 ; 
      for (auto i : v)
      {   cout<<i<<" "; 
          if (i==0)
              z++; 
          if (i>1)
              a++; 
      }
   
      return ans&&z==1&&a==0;
    }
    void dfs(int node )
    {
        vis[node] = true; 
        for (auto i : adj[node])
        {
            if (!vis[i])
                dfs(i); 
            else 
                ans =false; 
        }
    }
};