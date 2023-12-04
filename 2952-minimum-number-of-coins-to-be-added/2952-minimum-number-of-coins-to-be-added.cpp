class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int t) {
      int ans =0 ; 
      int mx = 0; 
      sort(coins.begin() , coins.end()); 
      for (auto i : coins)
      {
          while(i>mx+1)
          {
              mx+=mx+1; 
              ans++; 
          }
          if (mx>=t)
              break; 
          mx+=i; 
      }
      while(mx<t)
      {
          mx+=mx+1; 
          ans++; 
      }
        return ans; 
    }
    
};