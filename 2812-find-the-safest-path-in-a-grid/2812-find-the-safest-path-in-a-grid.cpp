class Solution {
public:
    vector<int>x = {0 , 0 , -1 , 1}; 
    vector<int>y = {-1  ,1 , 0 , 0};
    int n ; 
    bool check(int i , int j)
    {
        return !(i<0||j<0||i>=n||j>=n); 
    }
    int maximumSafenessFactor(vector<vector<int>>& grid) {
       queue<pair<int, int>> q;
         n = grid.size(); 
        vector<vector<int>>dis(n , vector<int>(n , 1e9)); 
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                if(grid[i][j]) {
                    dis[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
       
        while(!q.empty()){
            auto t = q.front();
            q.pop();

            int x1 = t.first, y1 = t.second;
            int s = dis[x1][y1];

            for(int i =0; i < 4; i++){
                int a = x1 + x[i];
                int b = y1 + y[i];

                if(check(a, b) && dis[a][b] > 1 + s) { 
                    dis[a][b] = 1 + s;
                    q.push({a, b});
                }
            }
        }
        vector<vector<bool>> vis(n, vector<bool>(n, false));
        priority_queue<pair<int,pair<int,int>>> pq;
        pq.push({dis[0][0], {0,0}});
        for (auto i : dis)
        {
            for (auto j : i)
            {
                cout<<j<<" "; 
            }
            cout<<endl; 
        }
        while(!pq.empty()){
           auto top = pq.top(); 
            pq.pop();
    
            if(top.second.first == n - 1 &&top.second.second == n - 1) 
                return top.first;
            vis[top.second.first][top.second.second] = true;

            for(int i = 0; i < 4; i++) {
                int a = top.second.first + x[i];
                int b = top.second.second + y[i];

                if(check(a,b)  && !vis[a][b]){
                    int s = min(top.first, dis[a][b]);
                    pq.push({s, {a, b}});
                    vis[a][b] = true;
                }
            }
        }

        return -1;
    }
};