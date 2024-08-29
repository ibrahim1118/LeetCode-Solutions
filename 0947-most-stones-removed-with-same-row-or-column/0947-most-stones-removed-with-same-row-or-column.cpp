class Solution {
public:
    vector<vector<int>>adj;
    int ans =0; 
    vector<int>vis; 
    void dfs(int node , int le)
    {
        ans = max(ans , le); 
        vis[node] = 1 ; 
        for (auto i : adj[node])
        {
            if (!vis[i])
                dfs(i , le+1); 
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
        int nu =0 ; 
        for (auto i : adj)
        {
            for (auto j : i)
                cout<<j<<" "; 
            cout<<endl;
        }
        for (int i =0;i<n;i++)
        {
            if (!vis[i]){
               nu++; 
                dfs(i , 1);
            } 
        }
        return n -nu; 
    }
};