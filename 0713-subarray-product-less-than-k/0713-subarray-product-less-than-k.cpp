class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        long long p = 1;
        int i=0;
        int j=0;
        int ans=0;
        while(i<n && j<n){
            p = p*nums[i];
           
            
            while(j<=i && p>=k){
                p = p/nums[j];
                j++;
            }
            
            
            ans = ans+i-j+1;
            i++;
        }

        return ans;
        
    }
};