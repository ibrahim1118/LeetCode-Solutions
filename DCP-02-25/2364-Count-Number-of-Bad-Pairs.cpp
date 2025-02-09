class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
       unordered_map<int,int>mp; 
       long long goodpair = 0 ; 
       for (int i =0 ;i<nums.size();i++)
       {
        goodpair+=mp[nums[i]-i]++; 
       }   
       long long  n = nums.size(); 
       return (n*(n-1))/2- goodpair; 
    }
};