class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend()); 
        int a =0; 
        long long ans =0; 
        for (int i =0;i<k;i++)
        {
            ans+=max(0  ,happiness[i]-a); 
            a++; 
        }
        return ans; 
    }
};