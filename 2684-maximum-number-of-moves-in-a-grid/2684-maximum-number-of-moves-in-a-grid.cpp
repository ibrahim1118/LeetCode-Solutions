class Solution {
public:
    int dp[1001][1001];
    int solve(vector<vector<int>>& grid, int r, int c){
        int n = grid.size();
        int m = grid[0].size();
        if(c == m){
            return 0;
        }
        if(dp[r][c]!=-1) return dp[r][c];
        int mx = 0;
        for(int i=-1; i<=1; i++){
            int newr = r+i;
            if(newr<n && newr>=0 && c<m-1 && grid[newr][c+1] > grid[r][c]){
                mx = max(mx, 1+solve(grid, newr, c+1));
            }
        }
        return dp[r][c] = mx;
    }
    int maxMoves(vector<vector<int>>& grid) {
        int ans=0;
        memset(dp, -1, sizeof(dp));
        for(int i=0; i<grid.size(); i++){
            ans = max(ans, solve(grid, i, 0));
        }
        return ans;
    }
};