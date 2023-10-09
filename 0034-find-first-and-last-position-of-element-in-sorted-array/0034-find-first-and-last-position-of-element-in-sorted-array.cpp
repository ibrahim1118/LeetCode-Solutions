class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int pos =-1; 
        int l=0 ,r = nums.size()-1; 
        while(l<=r)
        {
            int mid = l+(r-l); 
            if (nums[mid]==target)
             {
                pos = mid; 
                break; 
             }
             else if (nums[mid]>target)
             {
                 r= mid-1; 
             }
             else 
             {
                 l= mid+1; 
             }
        }
        if (pos==-1)
        return {-1,-1} ; 
        else 
        {
            if (pos>0)
            {
               int a = pos; 
               while(pos>=0&&nums[pos]==nums[a])
               {
                   pos--; 
               }
               return {pos+1,a}; 
            }
            if (pos<nums.size()-1)
            {
                 int a = pos; 
               while(pos<nums.size()&&nums[pos]==nums[a])
               {
                   pos++; 
               }
               return {a,pos-1};
            }
            return {pos, pos};
        }
    }
};