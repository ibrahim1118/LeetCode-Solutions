class Solution {
public:
    int ans =0; 
    int curr =0; 
    vector<vector<int>>_grid; 
    int n , m ;
    int getMaximumGold(vector<vector<int>>& grid) {
        _grid = grid;
        n = grid.size(); 
        m = grid[0].size(); 
        for (int i =0;i<n;i++)
        {
            for (int j =0;j<m;j++)
            {
                if (_grid[i][j])
                { 
                  ans= max(solve(i , j) , ans); 
                }
                
            }
        }
        return ans; 
    }
    int solve(int i , int j )
    {
        if (i<0||j<0||i>=n||j>=m||_grid[i][j]==0)
              return 0;  
        int x = _grid[i][j]; 
        _grid[i][j] = 0; 
        int mx = 0;
        mx = max(solve(i+1, j )+ x , mx); 
        mx = max(solve(i-1, j )+ x , mx); 
        mx = max(solve(i, j+1 )+ x , mx);  
        mx = max(solve(i, j-1 )+ x, mx);
        _grid[i][j]=x; 
        return mx;
    }
};