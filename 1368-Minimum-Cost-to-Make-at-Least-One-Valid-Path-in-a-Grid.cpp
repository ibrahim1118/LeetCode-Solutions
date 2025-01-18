class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
     priority_queue<pair<int, pair<int,int>>>pq;
     int n = grid.size(); 
     vector<int>xd = { 0, 0 , 1 , -1} , yd = {1 , -1 , 0,0}; 

     int m = grid[0].size(); 
     vector<vector<int>>vis(n , vector<int>(m)); 
     pq.push({0 , {0 , 0}}); 
     int ans =10000; 
     while (!pq.empty())
     {
         auto top = pq.top(); 
         pq.pop();
         int x = top.second.first; 
         int y = top.second.second; 
         if (vis[x][y]) continue;
         vis[x][y]= 1; 
         int cost= top.first*-1; 
         if (x==n-1&&y==m-1)
         {
            ans = min(ans, cost); 
            break; 
         }
         vector<int>v(4 , 1); 
         int ind = grid[x][y]-1; 
         v[ind]=0; 
         for (int i=0 ;i<4;i++)
         {
            int nx = x+xd[i] , ny= y +yd[i]; 
            if (nx>=0&&nx<n&&ny>=0&&ny<m&&!vis[nx][ny])
            {
                
                pq.push({-1*(cost+v[i]) , {nx, ny}}); 
            }
         }
     } 
     return ans;
    }
};