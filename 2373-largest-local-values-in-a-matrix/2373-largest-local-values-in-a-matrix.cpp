class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
      int n = grid.size(); 
      vector<vector<int>>v(n-2 , vector<int>(n-2)); 
      for (int i=1;i<n-1;i++)
      {
          for (int j=1;j<n-1;j++)
          {
              int mx =0; 
              for (int h = i-1;h<=i+1;h++)
              {
                  for (int k = j-1;k<=j+1;k++)
                  {
                       mx = max(mx , grid[h][k]); 
                  }
              }
              v[i-1][j-1]= mx;
          }
           
      }
      return v; 
    }
};