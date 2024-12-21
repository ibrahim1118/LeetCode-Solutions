class Solution {
public:
    int ans =0 ; 
    vector<vector<int>>adj;
    vector<int>vis; 
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        
        adj.resize(n); 
        vis.resize(n); 
        for (auto i: edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]); 
        }
        solve(0 , k   , values ); 
        return ans; 
        
    }
    long long solve(int node,int k,vector<int>& values){
        vis[node]=1;
        long long sum=0;
        for(auto i:adj[node]){
            if(vis[i]) continue;
            sum+=solve(i,k,values);
        };
        sum+=values[node];
        if(sum%k==0){
            ans++;
            return 0;
        }
        return sum;
    }
};