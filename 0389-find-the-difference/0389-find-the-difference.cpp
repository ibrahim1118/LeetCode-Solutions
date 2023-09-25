class Solution {
public:
    char findTheDifference(string s, string t) {
       vector<int>v(27); 
       for (auto i : s)
       {
           v[i-'a']++; 
       }
       
       for (auto i : t)
       {
           
            v[i-'a']--; 
       }
       for (int i=0;i<v.size();i++)
       {
           if (v[i]<0)
              return char('a'+i);
       }
       return 'a' ; 

    }
};