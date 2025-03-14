class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long  ans =0 ; 
        long long l =1  , r = 1e13; 
        while(l<=r)
        {
            long long  mid = l+ (r-l)/2; 
            long long  x =0; 
            for (auto i : candies)
            {
                x+=i/mid; 
            }
            if (x>=k)
             {
                ans = max(ans , mid); 
                l = mid+1 ; 
             }
             else 
             r = mid-1; 
        }
        return ans; 
    }
};