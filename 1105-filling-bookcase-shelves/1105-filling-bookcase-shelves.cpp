class Solution {
public:
    vector<int>dp;
    int n; 
    vector<vector<int>>book; 
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
     n = books.size(); 
     book = books; 
     dp.resize(n+1 ,-1); 
     return solve(0 , shelfWidth); 
    }
    int solve(int i , int sh)
    {
        if (i>=n)
          return 0;
        
        if (~dp[i])
            return dp[i]; 
        int ans =1e9; 
        int w =0, h =0; 
        for (int j=i;j<n;j++)
        {
            if (w+book[j][0]<=sh)
            {
                w+=book[j][0]; 
            }
            else 
                break; 
            h= max(h , book[j][1]); 
            ans = min(ans , h+solve(j+1 ,sh));
        }
        return dp[i] = ans; 
    }
};