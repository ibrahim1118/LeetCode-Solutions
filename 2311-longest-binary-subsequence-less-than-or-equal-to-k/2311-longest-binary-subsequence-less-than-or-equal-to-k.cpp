class Solution {
public:
    int longestSubsequence(string s, int k) {
      int ans =0; 
      int i =0; 
      int all =0; 
      for (int j=s.size()-1;j>=0;j--)
      {
          if (s[j]=='0')
          {
              ans++; 
              i++; 
          }
          else 
          {
              if (all+pow(2,i)<=k)
              {
                  ans++; 
                  all+=pow(2,i);
                  i++; 
                   
              }
          }
      }
      return ans; 
    }
};