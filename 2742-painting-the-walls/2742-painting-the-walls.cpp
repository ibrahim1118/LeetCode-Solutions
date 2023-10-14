class Solution {
public:
    int solve(vector<int>& cost, vector<int>& time, int i, int k, vector<vector<int>>& dp) {
        if (k <= 0) return 0;
        if (i >=cost.size()) return 1000000000;
        if (dp[i][k] != -1) return dp[i][k];

        
        int t = time[i];
        int take = cost[i] + solve(cost, time, i + 1, k - t - 1, dp);
        int nottake = solve(cost, time, i + 1, k, dp);
        return dp[i][k] = min(take, nottake);
    }

    int paintWalls(vector<int>& cost, vector<int>& time) {
        
        vector<vector<int>> dp(time.size() + 1, vector<int>(time.size() + 1, -1));
        return solve(cost, time, 0, time.size(), dp);
    }
};