class Solution {
public:
    bool isIsomorphic(string s, string t) {
       map<char,char>mp; 
       for (int i =0; i<s.size();i++)
       {  if (mp[s[i]]+1==1)
           mp[s[i]] = t[i]; 
           else 
           {
               if (mp[s[i]]!=t[i])
                   return  false; 
           }
       } 

       map<char,char>mp2; 
       for (int i =0; i<s.size();i++)
       {  if (mp2[t[i]]+1==1)
           mp2[t[i]] = s[i]; 
           else 
           {
               if (mp2[t[i]]!=s[i])
                   return  false; 
           }
       } 
       return true; 
    }
};