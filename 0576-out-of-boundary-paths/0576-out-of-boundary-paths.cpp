class Solution {
public:
    int l , r ; 
    vector<vector<vector<int>>>dp;
    int mod = 1e9+7; 
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        l = n ; 
        r = m; 
        dp.resize(m +3, vector<vector<int>>(n+3 ,vector<int>(maxMove+3 , -1)));
        // for (auto i : dp)
        // { for(auto j : i)
        //     {
        //       for (auto k : j)
        //           cout<<k<<" "; 
        //       cout<<endl; 
        //     }
        //    cout<<endl; 
        // }
        return solve( startRow, startColumn , maxMove);
    }
    int solve(int i , int j , int move)
    {
      if (i == r || j == l || i < 0 || j < 0) 
          return 1;
      if (move==0)
          return 0; 
      if (dp[i][j][move]!=-1)
          return dp[i][j][move]; 
       dp[i][j][move] =0; 
       dp[i][j][move] += solve(i+1 ,j  , move-1)%mod; 
       dp[i][j][move]%=mod; 
       dp[i][j][move] += solve(i-1 ,j  , move-1)%mod; 
       dp[i][j][move]%=mod; 
       dp[i][j][move] += solve(i ,j+1  , move-1)%mod;
       dp[i][j][move]%=mod; 
       dp[i][j][move] += solve(i ,j-1  , move-1)%mod;
       dp[i][j][move]%=mod; 

      
      return dp[i][j][move]; 
        
    }
};