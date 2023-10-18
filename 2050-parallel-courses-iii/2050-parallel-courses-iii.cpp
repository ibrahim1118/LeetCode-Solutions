class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> v(n+1), adj[n+1], in(n+1);
        int ans = 0;
        for(int i = 0; i < relations.size(); i++){
            int x = relations[i][0], y = relations[i][1];
            adj[x].push_back(y);
            in[y]++;
        }
        queue<int> q;
        for(int i = 1; i <= n; i++){
            if(!in[i]){
                v[i] = time[i-1];
                q.push(i);
            }
        }
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(auto i : adj[u]){
                in[i]--;
                v[i] = max(v[i], v[u] + time[i-1]);
                if(in[i] == 0){
                    q.push(i);
                }
            }
        }
        for(int i = 1; i <= n; i++) 
            ans = max(ans, v[i]);
        return ans;
    }
};