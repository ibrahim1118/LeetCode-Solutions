class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
       vector<int>fr(10005); 
        for (auto i : nums)
            fr[i]++; 
        vector<int>dp(10005); 
        dp[1] = fr[1]; 
        for (int i=2;i<dp.size();i++)
        {
            
                dp[i] = max(dp[i-1] , dp[i-2]+(fr[i]*i)); 
     
    
        }
        
        return dp[dp.size()-1]; 
    }
};