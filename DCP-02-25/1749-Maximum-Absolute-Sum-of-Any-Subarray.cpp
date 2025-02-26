class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int maxsum =-1e9+7 , curr=0;
       for (auto i: nums)
       {
          curr+=i; 
          maxsum =max(curr, maxsum); 
          curr = max(curr,0); 
       } 
       int minsum =1e9+7 ; curr=0;
       for (auto i: nums)
       {
          curr+=i; 
          minsum =min(curr, minsum); 
          curr = min(curr,0); 
       } 
       return max(maxsum , abs(minsum)); 

    }
};