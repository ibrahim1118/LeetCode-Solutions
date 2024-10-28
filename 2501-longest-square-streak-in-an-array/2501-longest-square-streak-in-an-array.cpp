class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
      vector<int>fre(100005) ; 
      for (auto i: nums)
          fre[i]++;
      int ans=-1;
      for (auto i: nums)
      {
          long long x = i; 
          int a =0; 
          while(fre[x])
          {
              
              a++; 
              x= x*x; 
              if (x>1e5)
                  break; 
              
              
          }
          if (a>1)
              ans = max(ans , a); 
      }
      return ans; 
    }
};