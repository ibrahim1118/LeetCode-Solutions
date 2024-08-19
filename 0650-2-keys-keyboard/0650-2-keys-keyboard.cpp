class Solution {
public:
    vector<vector<int>> dp;
    int solve(int i, int j, int n){

        if(i==n){
            return 0;
        }
        if(i>n){
            return n;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int paste=1+solve(i+j,j,n);
        int copy=INT_MAX;
        if(i!=j){
            copy=1+solve(i,i,n);
        }

        return dp[i][j]=min(copy,paste);
    }
    int minSteps(int n) {
        
        if(n==1){
            return 0;
        }

        dp.resize(1001,vector<int>(1001,-1));

        return 1+solve(1,1,n);
    }
};