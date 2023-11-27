class Solution {
public:
    vector<vector<int>> next; 
    vector<vector<int>>dp; 
    int mod = 1e9+7; 
    int knightDialer(int n) {
        next.push_back({4, 6});
        next.push_back({6, 8});
        next.push_back({7, 9});
        next.push_back({4, 8});
        next.push_back({3, 9, 0});
        next.push_back({});
        next.push_back({1, 7, 0});
        next.push_back({2, 6});
        next.push_back({1, 3});
        next.push_back({2, 4});
        dp.resize(n+1 , vector<int>(10)); 
        int ans =0; 
        for (int i=0;i<10;i++)
        {
            
            ans+=solve(i , n-1)%mod;
            ans%=mod;
        }
        return ans; 
         
    }
    int solve(int curr , int l)
    {
        if (l==0)
          return 1; 
        int &ret = dp[l][curr]; 
        if (ret!=0)
            return dp[l][curr]; 
        for (auto i : next[curr])
        {
            ret+=solve(i , l-1)%mod; 
            ret%=mod; 
        }
        return ret; 
    }
};