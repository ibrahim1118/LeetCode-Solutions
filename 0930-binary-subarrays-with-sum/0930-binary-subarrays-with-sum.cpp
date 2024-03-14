class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       int  sum=0, l=0, r=0, cnt=0, cnt1 =0;
        for(; r<nums.size(); r++){
            sum+=nums[r]; 
            for(; sum>goal; l++)
                sum-=nums[l];
            cnt+=(r-l+1);
        }       
         sum =0 , l =0 , r =0 ; 
        goal--;
         for(; r<nums.size(); r++){
            sum+=nums[r]; 
            for(; sum>goal&&l<=r; l++)
                sum-=nums[l];
            cnt1+=(r-l+1);
        }  
        return cnt - cnt1;
    }
};