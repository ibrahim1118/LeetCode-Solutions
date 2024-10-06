class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
         string x = ""; 
         vector<string>s , ss;
         for (auto i: s1)
         {
             if (i==' ')
             {
                 s.push_back(x);
                 x=""; 
             }
             else
                 x+=i; 
         }
         s.push_back(x); 
         x=""; 
         for (auto i: s2)
         {
             if (i==' ')
             {
                 ss.push_back(x);
                 x=""; 
             }
             else
                 x+=i; 
         }
         ss.push_back(x); 
          if (s.size()>ss.size())
          {
              vector<string> xx = s ; 
              s = ss ; 
              ss = xx ; 
          }
         int a=0;
        
         for (int i =0;i<s.size();i++)
         {
             if (ss[i]!=s[i])
                 break; 
             a++; 
        }
        for (int i =s.size()-1 , j= ss.size()-1;i>=0&&j>=0;j-- , i--)
        {
            if (s[i]!=ss[j])
                break; 
            a++; 
        }
        if (a>=s.size())
            return true ; 
        return false; 
    }
};