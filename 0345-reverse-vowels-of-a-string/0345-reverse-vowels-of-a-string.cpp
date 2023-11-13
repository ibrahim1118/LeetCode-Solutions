class Solution {
public:
    string reverseVowels(string s) {
       vector<int>ind; 
        vector<char>ch; 
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
               ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                ind.push_back(i); 
                ch.push_back(s[i]); 
            }
        }
        for (int i=0 ,r=ch.size()-1;i<r;i++,r--)
        {
            char t = ch[i]; 
            ch[i] = ch[r]; 
            ch[r] = t; 
        }
        for (int i =0;i<ch.size();i++)
        {
            s[ind[i]] = ch[i]; 
        }
        return s; 
    }
};