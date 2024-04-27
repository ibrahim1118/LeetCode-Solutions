class Solution {
public:
    int findRotateSteps(string ring, string key) {
      vector<vector<int>>indx(26); 
      for (int i=0;i<ring.size();i++)
      {
          indx[ring[i]-'a'].push_back(i); 
      }
      int n = ring.size()  , k = key.size(); 
      vector<vector<int>>dp(200 , vector<int>(200 , 1e9)); 
      for (auto i : indx[key[0]-'a'])
            dp[0][i] = min( i , n-i)+1; 
      for (int i=1;i<k;i++)
      {
          for (auto f : indx[key[i-1]-'a'])
          {
              for (auto t : indx[key[i]-'a'])
              {
                  int step = abs(f -t );
                  step = min(n -step , step); 
                  
                    dp[i][t] = min(dp[i][t], dp[i-1][f]+step+1);
              }
          }
      }
      int ans = 1e9; 
      
      for (auto i : dp[k-1]){
           // cout<<i<<" "; 
              ans = min(ans ,i);} 
        return ans; 
    }
};