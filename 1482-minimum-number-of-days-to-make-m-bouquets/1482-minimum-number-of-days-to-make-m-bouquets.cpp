class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
      int l = 0  , r = 1e9; 
      int ans = 2e9; 
      while(l<=r)
      {
          int mid = l+(r-l)/2; 
          int x =0; 
          int a =0; 
          for (auto i : bloomDay)
          {
              if (i<=mid)
              {
                  x++; 
              }
              else 
                  x =0; 
              if (x>=k)
              {
                  a++; 
                  x=0; 
              }
          }
          if (a>=m)
          {
              ans = min(ans , mid);
              r = mid-1; 
          }
          else 
              l= mid+1 ; 
      }
        if (ans==2e9)
            return -1; 
        return ans; 
    }
};