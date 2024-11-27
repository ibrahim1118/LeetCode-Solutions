class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& q) {
        vector<vector<int>>adj(n); 
        for (int i=0;i<n-1;i++)
        {
            adj[i].push_back(i+1); 
        }
        vector<int>ans; 
        for (auto i: q)
        {
            adj[i[0]].push_back(i[1]); 
            queue<pair<int,int>>q; 
            q.push({0 , 0}); 
            vector<int>vis(n); 
            int a =n; 
            while(!q.empty())
            {
                auto x = q.front();
                q.pop(); 
                if (x.first==n-1)
                {
                    a =min(a, x.second); 
                    //break; 
                }
                vis[x.first] =1 ; 
                for (auto i: adj[x.first])
                {
                    if (!vis[i])
                    {
                        q.push({i , x.second+1}); 
                    }
                }
                
            }
            ans.push_back(a); 
        }
        return ans; 
    }
};