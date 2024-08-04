class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long>v; 
        for (int i=1;i<n;i++)
        {
            nums[i]+=nums[i-1]; 
        }
        for (int len =1;len<=n;len++)
        {
            for (int l =0 , r = len-1;r<n;r++ , l++)
            {
                if (l==0)
                v.push_back(nums[r]); 
                else 
                    v.push_back(nums[r]-nums[l-1]); 
            }
        }
        sort(v.begin() , v.end()); 
        long long ans =0; 
        for (int i = left-1;i<right;i++)
        { 
            ans+=v[i];
            if (ans>1e9+7)
                ans-=1e9+7;
        } 
        return int( ans);
    }
};