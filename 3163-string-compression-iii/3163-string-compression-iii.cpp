class Solution {
public:
    string compressedString(string word) {
       string ans=""; 
       set<char> st;
       int x=1 ;
       for (int i=0;i<word.size()-1;i++)
       {
           if (word[i]==word[i+1])
           {
               if (x>=9)
               {
                   ans+=char('0'+x); 
                   ans+=word[i];
                   x=1; 
               }
               else 
               {
                   x++; 
               }
           }
           else 
           {
                   ans+=char('0'+x); 
                   ans+=word[i];
                   x=1; 
           }
       }
        ans+=char('0'+x); 
      ans+=word[word.size()-1];
        return ans; 
    }
    
};