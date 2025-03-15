class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
       int ans= 1e9; 
       int l =1 ,r = 1e9; 
       while(l<=r)
       {
        int mid = l + (r-l)/2; 
        cout<<mid<<endl; 
        int x =0 ; 
        for (int i =0 ;i<nums.size();i++)
        {
            if (nums[i]<=mid)
             { x++; 
            i++;} 
        }
        if (x>=k)
        {
            ans = min(ans, mid ); 
            r = mid-1 ; 
        }
        else 
          l = mid+1; 
       } 
       return ans; 
    }
};