class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
         int ans=0; 
         sort(nums.begin(), nums.end()); 
         for (int i=0;i<nums.size();i++)
         {
             int l =0 , r = i; 
             
             int right= i; 
             l = i , r =nums.size()-1; 
              while(l<=r)
             {
                 int mid = (l+r)/2; 
                 if (abs(nums[mid]-nums[i])<=k*2)
                 {
                     l= mid+1; 
                     right = max(right , mid); 
                 }
                 else 
                     r = mid-1 ; 
             }
             ans = max(ans , right-i+1); 
         }
         return ans; 
    }
};