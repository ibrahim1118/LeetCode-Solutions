class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) 
    {
        if(n==1) return {0};

        vector<int>count(n);
        vector<int> edg[n];
        for(auto &x:edges)
        {
            int u = x[0], v = x[1];
            count[u]++, count[v]++;
            edg[u].push_back(v);
            edg[v].push_back(u);
        }

        queue<int>q;
        for(int i=0;i<n;i++)
            if(count[i]==1) q.push(i); 

        while(n > 2)
        {
            int size = q.size();
            n -= size;
            while(size--)
            {
                int node = q.front(); q.pop();
                for(auto i:edg[node])
                {
                    count[i]--;
                    if(count[i]==1) 
                        q.push(i);
                }
            }
        }

        vector<int>ans;
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};