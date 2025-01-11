class Solution {
public:
    bool canConstruct(string s, int k) {
       vector<int>fre(26); 
       for (auto i: s)
       {
           fre[i-'a']++; 
       } 
       if (k>s.size())
         return false; 
       int odd =0 ; 
       for (auto i: fre)
         odd+=i%2; 
       return !(odd>k);
       
    }
};