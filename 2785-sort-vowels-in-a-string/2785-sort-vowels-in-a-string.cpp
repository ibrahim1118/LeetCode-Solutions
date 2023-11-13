class Solution {
public:
    string sortVowels(string s) {
       vector<int>ind ; 
       vector<char>ch; 
        for (int i=0;i<s.size();i++)
        {
            if (s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            {
                ind.push_back(i); 
                ch.push_back(s[i]); 
            }
        }
         sort(ch.begin(), ch.end()); 
        for (int i=0;i<ind.size();i++)
        {
            s[ind[i]] = ch[i]; 
        }
        return s; 
    }
};