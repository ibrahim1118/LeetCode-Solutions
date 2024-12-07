class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int ans= 1e9; 
        int l =1 , r = 1e9; 
        while(l<=r)
        {
            int mid = l+(r-l)/2; 
            int x =0 ;
            for (auto i: nums)
            {
                x+=i/mid; 
                if (i%mid==0)
                    x-=1; 
            }
            if (x<=maxOperations)
            {
                ans =min(mid ,ans); 
                r = mid-1; 
            }
            else 
                l = mid+1; 
        }
        return ans; 
    }
};