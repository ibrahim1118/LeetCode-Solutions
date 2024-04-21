class Solution {
public:
    vector<bool>ans;
    vector<vector<int>>adj;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        ans.resize(n); 
        adj.resize(n); 
        for (auto i : edges)
        {
            adj[i[0]].push_back(i[1]); 
            adj[i[1]].push_back(i[0]); 
        }
        dfs(source); 
        return ans[destination]; 
    }
    void dfs(int node)
    {
        if (ans[node])
             return; 
        ans[node] = true; 
        for (auto i : adj[node])
        {
            dfs(i); 
        }
    }
};