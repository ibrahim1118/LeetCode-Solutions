class Solution {
public:
    int ans =0; 
    int curr =0; 
    int islandPerimeter(vector<vector<int>>& grid) {
        for (int i =0;i<grid.size();i++)
        {
            for (int j =0;j<grid[0].size();j++)
            {
                curr =0; 
                if (grid[i][j]==1)
                {
                    dfs( i, j , grid); 
                }
                ans = max(ans , curr); 
            }
        }
        return ans; 
    }
    void dfs(int i  ,int j , vector<vector<int>>&grid)
    {
        if (i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0||grid[i][j]==-1)
               return; 
        grid[i][j] =-1; 
        if (i==0||grid[i-1][j]==0)
                curr++;
        if (j==0||grid[i][j-1]==0)
            curr++; 
         if (i==grid.size()-1||grid[i+1][j]==0)
                curr++;
        if (j==grid[0].size()-1||grid[i][j+1]==0)
            curr++; 
        dfs(i+1 , j , grid); 
        dfs(i-1 , j , grid); 
        dfs(i, j+1 , grid); 
        dfs(i , j -1, grid); 
    }
    
};