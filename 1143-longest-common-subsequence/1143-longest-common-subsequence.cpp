class Solution {
public:
    vector<vector<int>>dp;
    string s1 , s2; 
    int longestCommonSubsequence(string text1, string text2) {
        dp.resize(text1.size() , vector<int>(text2.size(),-1)); 
        s1 = text1 ; 
        s2 = text2; 
        return solve(0,0); 
    }
    int solve(int i , int j)
    {
        if (i==s1.size()||j==s2.size())
             return 0; 
        if (dp[i][j]!=-1)
               return dp[i][j]; 
        if (s1[i]==s2[j])
            return solve(i+1 , j+1)+1;
        int a = solve(i+1 , j); 
        int b = solve(i , j+1); 
        return dp[i][j] = max(a,b); 
    }
};