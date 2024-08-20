class Solution {
    int n;
    int dp[102][102][2];
private:
    int solve(int i, int m, int p, vector<int>& piles){
        if(i>=n){
            return 0;
        }
        if(dp[i][m][p]!=-1) 
            return dp[i][m][p];
        int ans = p ? INT_MIN : INT_MAX;
        int sum = 0;
        for(int x=1; x<=min(2*m,n-i); x++){
            sum += piles[i+x-1];
            if(p){ 
                ans = max(ans, sum + solve(i+x, max(m,x), 1-p, piles));
            }
            else{ 
                ans = min(ans, solve(i+x, max(m,x), 1-p, piles));
            }
        }
        return dp[i][m][p] = ans;
    }
public:
    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        memset(dp,-1,sizeof(dp));
        return solve(0,1,1,piles);
    }
};