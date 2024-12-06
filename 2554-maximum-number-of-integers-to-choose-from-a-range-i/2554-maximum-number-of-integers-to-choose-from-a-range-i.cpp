class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        vector<int>freq(10007); 
        for (auto i: banned)
            freq[i]++; 
        int ans = 0 ;
        long long sum=0; 
        for (int i=1;i<=n;i++)
        {
            if (!freq[i]&&sum+i<=maxSum)
            {ans++;
             sum+=i;} 
        }
        return ans; 
    }
};