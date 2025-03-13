class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& q) {
        int ans =-1;
        int  l=0 , r = q.size(); 
        while(l<=r)
        {
            int mid = l+ (r-l)/2; 
            vector<int>v(nums.size()+1) , nu = nums; 
            for (int i =0 ;i<mid; i++)
            {
                v[q[i][0]]-=q[i][2]; 
                v[q[i][1]+1]+=q[i][2]; 
            }
            for (int i =1 ;i<v.size();i++)
                v[i]+=v[i-1]; 
            for (int i =0 ;i<nu.size();i++)
               nu[i]+=v[i]; 
            int pos =0 , neg = 0 , zero= 0 ;
            for (auto i: nu)
            {
                if (i<=0)
                zero++; 
            }
            if (zero==nu.size())
            {
                if (ans == -1)
                ans= mid ; 
                else 
                ans = min (ans , mid); 
                r = mid-1 ;
            } 
            else 
            l = mid+1; 


        }
        return ans; 
    }
};