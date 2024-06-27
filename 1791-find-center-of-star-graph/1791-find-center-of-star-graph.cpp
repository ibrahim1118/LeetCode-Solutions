class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size(); 
        vector<vector<int>>adj(n+3);
        for (auto i : edges)
        {
           
            adj[i[1]].push_back(i[0]); 
             adj[i[0]].push_back(i[1]); 
        }
        int ans =0; 
        int a =0; 
        for (int i=0;i<=n+2;i++)
        {
            if (adj[i].size()>a)
            {
                a = adj[i].size(); 
                ans = i; 
            }
        }
        return ans; 
    }
};