class Solution {
public:
    vector<int>dp; 
    vector<int>arr; 
    int k ; 
    int maxSumAfterPartitioning(vector<int>& arr1, int k1) {
        int n =  arr1.size(); 
        this->arr = arr1;
        this->k = k1; 
        dp.resize(n+5,-1); 
        return solve( 0); 
    }
    int solve (int i )
    {
        if (i>=arr.size())
              return 0 ; 
        if (dp[i]!=-1)
               return dp[i]; 
        int ma =0 ; 
        int sum =0; 
        int x  =arr.size(); 
        for (int j=i ; j<min(x , i+k);j++)
        {
            ma  = max(arr[j] ,ma ); 
            sum = max(sum , solve(j+1)+ma*(j-i+1)); 
        }
        return dp[i] = sum; 
    }
};