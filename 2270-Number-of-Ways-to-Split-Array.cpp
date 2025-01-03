class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
      long long sum=0  ;
      vector<long long >pre; 
      for (auto i: nums)
      {
        sum+=i ; 
        pre.push_back(sum); 
      }
    int ans =0 ; 
    for (int i=1;i<pre.size();i++)
    {
        if (sum-pre[i-1]<=pre[i-1])
              ans++; 
    }
      return ans; 
    }
};