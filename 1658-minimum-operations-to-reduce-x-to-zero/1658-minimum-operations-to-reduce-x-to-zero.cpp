class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size(); 
        vector<int>prf(n+1) ,sfx(n+1);
        for (int i=0;i<n;i++)
        {
            prf[i+1] = nums[i]+prf[i]; 
        } 
        for (int i=n-1;i>=0;i--)
        {
            sfx[n-i]=sfx[n-i-1]+nums[i]; 
        }
        int ans =1e7; 
        for (int i=0;i<=n;i++)
        {
            int l =0 ,r = n; 
            while(l<=r)
            {
                int mid = l+(r-l)/2; 
                if (prf[i]+sfx[mid]==x&&i+mid<=n)
                {
                    ans = min(ans , i+mid); 
                   r = mid-1; 
                }
                else if (prf[i]+sfx[mid]>x)
                {
                    r = mid-1; 
                }
                else 
                {
                    l = mid+1; 
                }

            }
        }
    if (ans==1e7)
    return -1;
    return ans;  

    }
};