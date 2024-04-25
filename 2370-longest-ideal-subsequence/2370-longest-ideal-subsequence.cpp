class Solution {
public:
    int longestIdealString(string s, int k) {
      int n = s.size(); 
      vector<int>dp(n , 1);
      vector<int>last(26 ,-1); 
      for (int i=0;i<n;i++)
      {
          for (char j ='a';j<='z';j++)
          {
              if (abs(s[i]-j)<=k&&last[j-'a']!=-1)
              {
                  dp[i] = max(dp[i] , dp[last[j-'a']]+1); 
              }
          }
          last[s[i]-'a']=i; 
      }
      int ans =0; 
      for (auto i : dp)
          ans = max( i , ans); 
      return ans; 
    }
};