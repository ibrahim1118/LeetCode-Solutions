class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& a) {
        int first =0;
        map<int,vector<int>> adj; 
        for (auto i : a)
        { adj[i[0]].push_back(i[1]); 
          adj[i[1]].push_back(i[0]); 
        }
        for (auto i : adj )
        {
            if (i.second.size()==1)
            {
                first = i.first ;
                break; 
            }
        }
        queue<int>q ; 
        q.push(first);
        map<int,int>vis; 
        vector<int>ans; 
        while(!q.empty())
        {
            int top = q.front(); 
            q.pop(); 
            ans.push_back(top); 
            vis[top]++;
            for (auto i : adj[top])
            {
                if (!vis[i])
                      q.push(i); 
            }
        }
        return ans; 
    }
};