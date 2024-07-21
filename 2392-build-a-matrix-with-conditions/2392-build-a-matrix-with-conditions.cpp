class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<vector<int>> ans(k, vector<int>(k, 0));

        unordered_map<int, int> numToRow;
        unordered_map<int, int> numToCol;

        solve(k, rowConditions, numToRow);
        solve(k, colConditions, numToCol);

        if(numToRow.size() != k || numToCol.size() != k) return {};

        for(int i = 1; i <= k; ++i) ans[numToRow[i]][numToCol[i]] = i;

        return ans;
    }

    void solve(int& k, vector<vector<int>>& con, unordered_map<int,int>& pos){
        vector<vector<int>> adj(k+1);
        vector<int> numParents(k+1,0);

        for(auto c : con){
            adj[c[0]].push_back(c[1]);
            numParents[c[1]]++;
        }

        int index = 0;
        queue<int> q;

        for(int i = 1; i <= k; ++i){
            if(numParents[i] == 0){
                q.push(i);
                pos[i] = index++;
            }
        }

        while(!q.empty()){
            int parent = q.front();
            q.pop();
            for(auto child : adj[parent]){
                if(--numParents[child] == 0){
                    q.push(child);
                    pos[child] = index++;
                }
            }
        }
    }
};