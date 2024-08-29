class Solution {
public:
    vector<vector<int>>adj;
    vector<int>vis; 
    void dfs(int node)
    {
        vis[node] = 1 ; 
        for (auto i : adj[node])
        {
            if (!vis[i])
                dfs(i ); 
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        vis.resize(n); 
        adj.resize(n); 
        for (int i =0;i<n;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if (stones[i][0]==stones[j][0]||stones[i][1]==stones[j][1])
                {
                    adj[i].push_back(j); 
                    adj[j].push_back(i); 
                }
            }
        }
        int nu =0;
        for (int i =0;i<n;i++)
        {
            if (!vis[i]){
               nu++; 
                dfs(i);
            } 
        }
        return n -nu; 
    }
};