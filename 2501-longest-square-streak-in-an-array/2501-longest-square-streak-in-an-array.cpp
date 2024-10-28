class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
      set<int>st ; 
      for (auto i: nums)
          st.insert(i); 
      int ans=-1;
      for (auto i: nums)
      {
          long long x = i; 
          int a =0; 
          while(st.count(x))
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