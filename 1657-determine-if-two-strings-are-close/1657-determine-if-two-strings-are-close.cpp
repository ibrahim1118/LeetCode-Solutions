class Solution {
public:
    bool closeStrings(string w1, string w2) {
       vector<int>v(26) , vv(26);
       if (w1.size()!=w2.size())
           return false; 
       for (int i=0;i<w1.size();i++)
       {
           v[w1[i]-'a']++; 
           vv[w2[i]-'a']++; 
       }
       for (int i=0;i<26;i++)
       {
           if(v[i]!=0&&vv[i]==0)
               return false; 
       }
       sort(v.begin() , v.end()); 
       sort(vv.begin() , vv.end()); 
       for (int i=0;i<26;i++)
       {
           if (vv[i]!=v[i])
                 return false; 
       }
       return true; 
    
           
    }
};