class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
      int ans =0; 
      vector<int>v(27);
      for (auto i : chars)
          v[i-'a']++; 
      for (auto i : words)
      {
          vector<int>vv(27); 
          for (auto j :i)
                vv[j-'a']++; 
          int a =0; 
          for (int j=0;j<27;j++)
          {
              if (vv[j]>v[j])
              {
                  a++; 
                  break; 
              }
          }
          if (!a)
              ans+=i.size(); 
      }
      return ans; 
    }
};