class Solution {
public: 
    const int mod = 1e9+7;  
    int kInversePairs(int n, int k) {
     vector<vector<int>>dp(n+1 , vector<int>(k+2)); 
      dp[n][0] =1; 
      for (int i = n-1;i>0;i--)
      {
          for (int j =0;j<=k;j++)
          {
              for (int h=0;h<=min(j,n-i);h++)
              {
                  dp[i][j]+=dp[i+1][j-h]; 
                  dp[i][j]%=mod; 
              }
          }
      }
      return dp[1][k]; 
        
    }
   
};