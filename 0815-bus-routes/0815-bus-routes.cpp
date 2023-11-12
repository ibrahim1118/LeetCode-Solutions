class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int s, int t)     {
        if (s==t)
           return 0; 
        vector<vector<int>>adj(1e6+7); 
        for (int i =0;i<routes.size();i++)
        {
            for (auto j : routes[i])
                  adj[j].push_back(i); 
        }
        vector<bool>vis(505); 
        queue<int>q; 
        for (auto i : adj[s])
        { q.push(i);
           vis[i] =true; 
        }
        int ans =1;
        while(!q.empty())
        {
            int s = q.size(); 
            while(s--)
            {
                int to =  q.front();
                q.pop(); 
                for (auto i : routes[to])
                {
                    if (i==t)
                        return ans;
                    for (auto j : adj[i])
                    {
                        if (!vis[j]){
                            q.push(j);
                             vis[j] =true; 
                        } 
                    }
                }
                
            }
            ans++; 
        }
    return -1; 
    }
};