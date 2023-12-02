class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  ans =-1e9; 
        int a =0; 
        for (auto i : nums)
        {
            a+=i; 
            ans = max(a , ans); 
            if (a<0)
                a=0; 
            
        }
        return ans; 
    }
};