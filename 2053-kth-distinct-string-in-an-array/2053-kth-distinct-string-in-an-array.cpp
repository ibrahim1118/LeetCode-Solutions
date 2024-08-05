class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
       map<string,int>mp; 
      for (auto i: arr)
          mp[i]++; 
      int x =0; 
      for (auto i: arr)
      {
          if (mp[i]==1)
              x++; 
          if (x==k)
              return i; 
      }
        return ""; 
    }
};