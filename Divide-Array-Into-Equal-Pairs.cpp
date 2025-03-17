class Solution {
public:
    bool divideArray(vector<int>& nums) {
       vector<int>v(505); 
       for (auto i: nums)
         v[i]++; 
       for (auto i : v)
       {
         if (i%2)
           return false ; 
       }
       return true; 
    }
};