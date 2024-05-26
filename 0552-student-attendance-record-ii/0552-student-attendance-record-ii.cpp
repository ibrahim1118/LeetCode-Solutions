class Solution {
public:
    vector<vector<vector<int>>>dp; 
    long long  mod = 1e9+7; 
    int checkRecord(int n) {
        dp.resize(n+5 , vector<vector<int>>(5 ,vector<int>(7, -1)));
        return int(solve(n , 0 , 0)%mod); 
    }
    long long  solve(int i  , int a ,int l)
    {
        if(a==2 || l==3)
        return 0;
    if(i==0)
        return 1;
    if(dp[i][a][l]!=-1)
        return dp[i][a][l];
    long long int ans=0;
    ans=solve(i-1,a,0)%mod;
    ans=(ans+solve(i-1,a+1,0)%mod)%mod;
    ans=(ans+solve(i-1,a,l+1)%mod)%mod;
    return dp[i][a][l]=ans;; 
        
        }
};