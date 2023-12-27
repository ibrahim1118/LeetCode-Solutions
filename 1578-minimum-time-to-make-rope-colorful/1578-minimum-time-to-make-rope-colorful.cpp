class Solution {
public:
    vector<vector<int>>dp;
    vector<int>t ;
    string col ;
    int minCost(string colors, vector<int>& need) {
        int n = colors.size();
        dp.resize(n+1,vector<int>(27,-1));
        t = need; 
        col = colors; 
        return solve(n-1,26);
    }
    int solve(int ind,int prev){
        if(ind==0)
        {
            if(col[ind]-'a'==prev)
                return t[ind];
            return 0;
        }
        if(dp[ind][prev]!=-1)
            return dp[ind][prev];
        int Take = 1e8, notTake = 1e8;
        notTake = t[ind]+solve(ind-1,prev);
        if(col[ind]-'a'!=prev){
            Take = solve(ind-1,col[ind]-'a');
        }
        return dp[ind][prev]=min(Take,notTake);
    }
};