class Solution {
public:
    int isPrefixOfWord(string sentence, string sW) {
       vector<string> word ; 
        string s = "";
        for (auto i : sentence)
        {
            if (i==' ')
            {
                word.push_back(s); 
                s=""; 
            }
            else 
                s+=i; 
        }
        word.push_back(s); 
        for (int i =0;i< word.size();i++)
        {
            if (word[i].size()>=sW.size())
            {
              int ok = 1; 
               for (int j=0;j<sW.size();j++)
               {
                   if (sW[j]!=word[i][j])
                   {
                       ok = 0; 
                       break; 
                   }
               }
                if (ok)
                    return i+1; 
            }
        }
        return -1; 
    }
};