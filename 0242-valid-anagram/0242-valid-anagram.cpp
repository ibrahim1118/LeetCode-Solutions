class Solution {
public:
    bool isAnagram(string s, string t) {
      vector<int>v(27); 
      for (auto i : s)
            v[i-'a']++; 
      for (auto i : t)
          v[i-'a']--; 
      for (auto i:v)
          if (i!=0)
              return false; 
     return true; 
    }
};