class Solution {
public:
    vector<vector<int>>dp; 
    int numRollsToTarget(int n, int k, int target) {
       dp.resize(target+1 , vector<int>(n+1 ,-1)); 
       return sovle(target , n ,k); 
    }
    int sovle(int t , int n ,int k)
    {
        if (n==0&&t==0)
            return 1;
        if (n<=0||t<=0)
            return 0; 
        if (dp[t][n]!=-1)
            return dp[t][n]; 
        int ans =0; 
        for (int i=1;i<=k;i++)
        {
            ans+=sovle(t-i , n-1 ,k);
            if (ans>1e9+7)
            ans-=1e9+7;
        }
        return dp[t][n] = ans; 
    }
};