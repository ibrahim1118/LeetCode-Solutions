class Solution {
public:
    int countSquares(vector<vector<int>>& mat) {
      int ans=0 ; 
      for(int i =0;i<mat.size();i++)
      {
          for(int j=1;j<mat[0].size();j++)
          {
              mat[i][j]+=mat[i][j-1]; 
          }
      }
      for(int i =1;i<mat.size();i++)
      {
          for(int j=0;j<mat[0].size();j++)
          {
              mat[i][j]+=mat[i-1][j]; 
          }
      }
      // for (auto i: mat)
      // {
      //     for (auto j: i)
      //         cout<<j<<" "; 
      //     cout<<endl ; 
      // }
      for (int len = 1 ; len<=mat.size();len++)
      {
          for (int i=0;i<mat.size();i++)
          {
              for (int j =0;j<mat[0].size();j++)
              {
                  int x1 = i , y1 =j ; 
                  int x2 = i+len-1, y2 =j+len-1; 
                  if (x2<mat.size()&&y2<mat[0].size())
                  {
                    
                    
                      int  sum = mat[x2][y2]; 
                      if (x1-1>=0)
                      sum-=mat[x1-1][y2]; 
                      if (y1-1>=0)
                      sum-=mat[x2][y1-1];
                      if (x1-1>=0&&y1-1>=0)
                      sum+=mat[x1-1][y1-1];
                     // cout<<x1<<" "<<y1<<" "<<x2<<" "//<<y2<<" "<<sum<<" "<<len<<endl; 
                      if (sum==len*len)
                          ans++; 
                          
                  }
              }
          }
      }
      return ans ;
    }
};