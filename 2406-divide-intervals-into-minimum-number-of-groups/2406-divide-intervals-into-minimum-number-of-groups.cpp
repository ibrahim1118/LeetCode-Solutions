class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
       vector<int>v(1000006); 
       for (auto i : intervals)
       {
           v[i[0]]++; 
           v[i[1]+1]--; 
       }
       for (int i=1;i<1000006;i++)
       {
          v[i]+=v[i-1];   
       }
       int ans=0; 
       for (auto i : v)
       {
           ans = max(ans, i); 
       }
       return ans; 
    }
};