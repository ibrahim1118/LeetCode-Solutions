class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
       int ans =0 ; 
      int n= grid.size(); 
      for (int i=1;i<n-1;i++)
      {
          for (int j =1;j<n-1;j++)
          {
              set<int>st  , st1 ; 
              st1.insert(grid[i-1][j-1]+grid[i-1][j]+grid[i-1][j+1]); 
              st1.insert(grid[i][j-1]+grid[i][j]+grid[i][j+1]); 
              st1.insert(grid[i+1][j-1]+grid[i+1][j]+grid[i+1][j+1]); 
              st1.insert(grid[i-1][j-1]+grid[i][j-1]+grid[i+1][j-1]); 
              st1.insert(grid[i-1][j]+grid[i][j]+grid[i+1][j]); 
              st1.insert(grid[i-1][j+1]+grid[i][j+1]+grid[i+1][j+1]); 
              st1.insert(grid[i-1][j-1]+grid[i][j]+grid[i+1][j+1]); 
              st1.insert(grid[i-1][j+1]+grid[i][j]+grid[i+1][j-1]); 
              for (int r =i-1;r<=i+1;r++)
              {
                  for (int c = j-1 ;c<=j+1;c++)
                  {
                      if (grid[r][c]&&grid[r][c]<=9)
                          st.insert(grid[r][c]); 
                  }
              }
              for (auto i: st1)
                  cout<<i<<" "; 
              cout<<endl ; 
              for (auto i: st)
                  cout<<i<<" ";
              cout<<endl; 
              if (st1.size()==1&&st.size()==9)
                  ans++; 
          }
      }
     return ans; 
    }
};