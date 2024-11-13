class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long ans =0 ; 
        sort(nums.begin(), nums.end()); 
        for (int i=0;i<nums.size();i++)
        {
            int b=nums.size() , e = 0; 
            int l=i+1 , r= nums.size()-1; 
            while(l<=r)
            {
                int mid = (l+r)/2; 
                if (nums[mid]+nums[i]>=lower)
                {
                    b = min(b , mid); 
                    r = mid-1; 
                    
                }
                else 
                    l = mid+1 ; 
            }
            l = i+1 , r = nums.size()-1; 
             while(l<=r)
            {
                int mid = (l+r)/2; 
                if (nums[mid]+nums[i]<=upper)
                {
                    e = max(e , mid); 
                    l = mid+1; 
                    
                }
                else 
                    r = mid-1 ; 
            }
            ans+=max(0  , e-b+1); 
        }
        return ans; 
    }
};