class Solution {
public:
    int minimizedMaximum(int n, vector<int>& qu) {
        int ans =1e5+8 ;
        int l =1, r = 1e5+8; 
        while(l<=r)
        {
            int mid = (l+r)/2; 
            int x =0 ; 
            for (auto i: qu)
            {
                x+=i/mid; 
                if (i%mid)
                    x++; 
            }
            if (x<=n)
            {
                ans = min(ans , mid); 
                r = mid-1; 
            }
            else 
                l = mid+1; 
        }
        return ans; 
    }
};