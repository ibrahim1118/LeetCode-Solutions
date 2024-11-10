class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int l =0 ; 
        vector<int>bit(32); 
        int x =0 ; 
        int ans =nums.size()+1;
        for (int i=0;i<nums.size();i++)
        {
            x|=nums[i]; 
            bitset<32> b = nums[i]; 
            for (int j=0;j<32;j++)
            {
                if (b[j])
                     bit[j]++; 
               
            }
             while(x>=k&&l<=i)
                {
                    cout<<x<<" "<<l<<" "<<i<<endl; 
                    ans= min(ans,i-l+1);
                    bitset<32> xx=x ; 
                    bitset<32> ll = nums[l] ; 
                    for(int j=0;j<32;j++)
                    {
                        if (ll[j]==1)
                        {
                            bit[j]--; 
                            if (bit[j]==0)
                                xx[j]=0; 
                        }
                    }
                   l++; 
                   x = xx.to_ulong(); 
                }
            
        }
       if (ans>nums.size())
           return -1; 
        return ans; 
    }
};