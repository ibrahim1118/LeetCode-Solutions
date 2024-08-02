class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        int o =0 , z =0; 
        vector<int>one ,zero;
        for (auto i: nums)
        {
            if (i==1)
                o++; 
            else 
                z++; 
            one.push_back(o); 
            zero.push_back(z); 
        } 
        int ans= 1e5; 
        o = one[n-1];
        z = zero[n-1];
        if (!o||!z)
            return 0; 
        for (int l = 0 , r=o-1;r<n;l++ ,r++)
        {
            int x ;
            if (l>0)
            x=  one[r] -one[l-1];
            else 
            x= one[r]; 
    
            ans = min(ans  , o-x); 
        }
        for (int l = 0 , r=z-1;r<n;l++ ,r++)
        {
            int x ;
            if (l>0)
            x=  zero[r] -zero[l-1];
            else 
            x= zero[r];  
            ans = min(ans  , z-x); 
        }
        if (ans==1e5)
            return 0 ; 
        return ans; 
    }
};