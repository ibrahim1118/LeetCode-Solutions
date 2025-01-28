class Solution {
public:
    int ans =0;
    int sum =0; 
    int findMaxFish(vector<vector<int>>& grid) {
        for (int i=0;i<grid.size(); i++)
        {
            for (int j=0;j<grid[i].size();j++)
            {
                if (grid[i][j]>0)
                    
                { sum=0;
                    dfs(grid , i , j );} 
            }
         }
        return ans; 
    }
    void dfs(vector<vector<int>>& grid,int i ,int j)
    {
         if (i>=grid.size()||j>=grid[i].size()||grid[i][j]==0)
         {
             ans = max(ans, sum); 
             return; 
         }
         sum+=grid[i][j]; 
         grid[i][j]=0; 
         dfs(grid , i+1 ,j ); 
         dfs(grid , i-1 ,j ); 
         dfs(grid , i ,j+1 ); 
         dfs(grid , i ,j-1 ); 
    }
        
};