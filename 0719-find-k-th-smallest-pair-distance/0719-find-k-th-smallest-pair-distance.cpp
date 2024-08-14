class Solution {
public:
    int n ; 
    int k;
    int smallestDistancePair(vector<int>& nums, int kk) {
      sort(nums.begin() , nums.end()); 
     k =kk ; 
      n  = nums.size(); 
      int ans = nums[n-1]- nums[0]; 
      int l =0 , r = ans ;
      while(l<=r)
      {
          int mid = l+(r-l)/2; 
          if (can(mid  , nums))
          {
              ans = min(ans , mid); 
              r= mid-1; 
          }
          else 
              l = mid+1 ; 
      }
        return ans; 
    }
    bool can(int a , vector<int>v)
    {
          int left = 0, count = 0;
            for(int right = 0; right < n; right++)
            {
                while(v[right] - v[left] > a) left++;
                count += right - left;
            }
            return count >= k;
    }
};