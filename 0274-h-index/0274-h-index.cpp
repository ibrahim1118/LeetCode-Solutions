class Solution {
public:
    int hIndex(vector<int>& c) {
     sort(c.begin() , c.end());
      int ans =0; 
      int n  = c.size(); 
     for (int i=c.size()-1;i>=0;i--)
     {
         if (c[i]>=c.size()-i)
             ans = max(ans , n-i); 
     }
      return ans; 
    }
};