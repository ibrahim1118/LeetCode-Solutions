class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int mx =1 , ma =1; 
       int ans = -1e9; 
       for (int i : nums)
       {   if (i==0)
       {
           mx =1 , ma =1;
           ans = max(ans , 0); 
           continue;
       }
           int p1 = mx*i; 
           int p2 = ma*i;
           mx = max({p1  ,p2 , i}); 
           ma = min({p1 , p2 ,i}); 
           ans = max(ans , mx); 
       }
       return ans; 
    }
};