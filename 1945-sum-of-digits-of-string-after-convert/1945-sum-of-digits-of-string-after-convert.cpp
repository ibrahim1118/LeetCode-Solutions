class Solution {
public:
    int getLucky(string s, int k) {
       int ans =0 ; 
      for (auto i: s)
      {
          int a = int(i-'a'+1); 
          while(a>0)
          {
              ans+=a%10; 
              a/=10; 
          }
      }
      k--; 
     cout<<ans; 
      while(k&&ans>1)
      {
          int sum=0 ; 
          while(ans>0)
          {
              sum+=ans%10; 
              ans/=10; 
          }
          ans= sum ; 
          k--; 
      }
      return ans; 
    }
};