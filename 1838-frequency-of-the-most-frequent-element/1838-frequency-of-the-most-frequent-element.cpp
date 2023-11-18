class Solution {
public:
    int maxFrequency(vector<int>& num, int k) {
        sort(num.begin() , num.end());
        vector<long long>nums;
        for (auto i : num)
            nums.push_back(i); 
        long long  sum =0; 
        int ans =1; 
        sum+=nums[0]; 
        int l =0 ; 
        for (int r=1;r<nums.size();r++)
        {
            sum+=nums[r];
            while((r-l+1)*nums[r]-sum>k)
            {
                sum-=nums[l]; 
                l++; 
            }
            ans = max(ans, r-l+1); 
        }
        return ans; 
    }
};