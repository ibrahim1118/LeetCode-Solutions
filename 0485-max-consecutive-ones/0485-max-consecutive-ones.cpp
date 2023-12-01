class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans =0; 
        int a =0; 
        for (auto i : nums)
        {
            if (i==1)
                a++; 
            else 
            {
                ans =max(ans , a); 
                a=0; 
            }
        }
        return max(ans , a); 
    }
};