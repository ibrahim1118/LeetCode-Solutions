class Solution {
public:
    int getMaximumGenerated(int n) {
      vector<long long>v(n+5); 
      v[0]=0 , v[1]=1; 
      for (int i=1;i<=n;i++)
      {
          if (i*2<=n)
              v[i*2] = v[i]; 
          if (i*2+1<=n)
              v[i*2+1] = v[i]+v[i+1]; 
      }
      long long  ans =0; 
      for (int i =0; i<=n;i++)
          ans = max(ans , v[i]); 
      return int(ans); 
        
    }
};