class Solution {
public:
   vector<int>vis; 
   vector<vector<bool>>isde;
   vector<vector<int>>adj;  
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& p, vector<vector<int>>& q) {
        adj.resize(n); 
        vis.resize(n);
        for (auto i: p)
        {
            adj[i[0]].push_back(i[1]); 
        }
        isde.resize(n , vector<bool>(n)); 
        for (int i=0 ; i<n;i++)
        {
            vis.clear(); 
            vis.resize(n); 
            dfs(i , i); 
        }
        vector<bool>ans ;
        for (auto i: q)
        {
            ans.push_back(isde[i[0]][i[1]]); 
        }
        return ans; 
    }
    void dfs(int node , int i)
    {
        isde[i][node] = true; 
        if (vis[node])
          return; 
        vis[node] =1; 
        for (auto j : adj[node])
        {
            if (!vis[j])
               dfs(j  , i ); 
        } 
    }
};