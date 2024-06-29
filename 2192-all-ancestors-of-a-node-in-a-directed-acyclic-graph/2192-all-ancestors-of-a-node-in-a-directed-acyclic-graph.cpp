class Solution {
    vector<vector<int>>ans; 
    vector<vector<int>>adj; 
    void dfs(int pre , int curr)
    {
        for(int ch : adj[curr])
        {
            if(ans[ch].empty() || ans[ch].back() != pre )
            {
                ans[ch].push_back(pre);
                dfs(pre, ch);
            }
        }
    }

public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        ans.resize(n); 
        adj.resize(n); 
        for(auto i : edges)
        {
            adj[i[0]].push_back(i[1]);
        }
        for
        (int i=0;i<n;i++)
        {
            dfs(i, i);
        }
        return ans;
    }
};