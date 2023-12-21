class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
     set<int>st; 
      for (auto i : points)
      {
          st.insert(i[0]); 
      }
      vector<int>a ; 
      for (auto i : st)
          a.push_back(i); 
      st.clear(); 
      for (int i=1;i<a.size();i++)
      {
          st.insert(a[i]-a[i-1]); 
      }
      int ans =0; 
       for (auto i : st)
           ans= i; 
      return ans; 
    }
};