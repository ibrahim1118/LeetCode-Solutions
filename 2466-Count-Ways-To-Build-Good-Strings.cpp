class Solution {
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(100005); 
        int mod = 1e9+7; 
        if (zero<=high)
        dp[zero]=1; 
        if (one<=high)
        dp[one]+=1;
        for (int i=0;i<=high;i++)
        {
            if (i-zero>=0)
            dp[i]+=dp[i-zero]%mod; 
            if (i-one>=0)
            dp[i]+=dp[i-one]%mod;
            dp[i]%=mod;  
        }
        int ans =0  ; 
        for (int i =0;i<=high;i++)
        cout<<dp[i]<<" "; 
        for (int i=0;i<=high;i++)
         {
              if (i>=low)
              {
                cout<<dp[i]<<" "; 
                ans+=dp[i]%mod; 
                ans%= mod; 
              }
         }
        
         return ans; 
    }
};