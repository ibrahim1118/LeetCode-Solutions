class Solution {
public:
    vector<vector<long long >>dp; 
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        dp.resize(101 , vector<long long>(101,-1)); 
        sort(robot.begin() , robot.end()); 
        vector<pair<int,int>>fac; 
        for (auto i : factory)
            fac.push_back({i[0] , i[1]}); 
        sort(fac.begin() , fac.end()); 
        return solve(0 , 0 , robot , fac); 
    }
       long long solve(int i, int j, vector<int>& robot,
             vector<pair<int,int>>& fac) {
        
        
        if (i == robot.size())
            return 0;
        
        
        if (j == fac.size())
            return 1e18; 
        
        if (dp[i][j] != -1)
            return dp[i][j];
        
        
        long long ma = solve(i, j + 1, robot, fac);
        int facPos = fac[j].first; 
        int limit = fac[j].second;

        long long  totalDist = 0;

        for (int k = 0; k < limit && (i + k) < robot.size(); k++) {
            totalDist += abs(facPos - robot[i + k]);
            ma = min(ma, totalDist + solve(i + k + 1, j + 1, robot, fac));
        }

        return dp[i][j] = ma;
    }
    
};