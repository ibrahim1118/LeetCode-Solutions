class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<long long> pre1(n+1,0),pre2(n+1,0);
        
        for(int i = 0; i < n ; i++){
            pre1[i+1] = pre1[i] + grid[0][i];
            pre2[i+1] = pre2[i] + grid[1][i];
        }

        long long ans = 1e11;
        for(int i = 0; i < n;i++){
            long long top_remaining = pre1[n] - pre1[i+1];
            long long bottom_remaining = pre2[i];

            
            long long player2score = max(top_remaining,bottom_remaining);

            
            ans = min(ans,player2score);
        }
        return ans;
    }
};