class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int ma =nums[k];
        for (int i=k;i>=0;i--)
        {
            ma = min(nums[i] , ma); 
            nums[i] = ma; 
        }
        ma = nums[k]; 
        for (int i=k;i<nums.size();i++)
        {
            ma = min(ma , nums[i]);
            nums[i]=ma; 
        }
        int ans =0; 
        int l =0 ,r = nums.size()-1; 
        while(l<=k&&r>=k)
        {
            ans = max(ans , min(nums[l],nums[r])*(r-l+1)); 
            if (nums[l]<nums[r])
                l++; 
            else 
                r--; 
        }
        return ans; 
       
    }
};