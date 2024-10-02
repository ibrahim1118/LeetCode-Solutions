class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
      set<int>st ; 
      for (auto i : arr)
          st.insert(i); 
      map<int,int>mp ; 
      int c =1 ; 
      for (auto i: st)
      {
          mp[i] = c ; 
          c++; 
      }
      for (auto &i :arr)
           i = mp[i]; 
        return arr; 
    }
};