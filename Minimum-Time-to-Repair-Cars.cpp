class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
      long long ans =1e18 ; 
      long long l=0 , r = 1e18 ;
      while(l<=r)
      {
        long long mid = l +(r-l)/2; 
        long long x = 0 ; 
        for (auto i : ranks)
        {
            long long a= mid/i; 
            x+=sqrtl(a); 
        }
        if (x>=cars)
        {
            ans  = min(ans, mid); 
            r = mid-1 ; 
        }
        else 
        l = mid+1;
      }  
      return ans; 
    }
};