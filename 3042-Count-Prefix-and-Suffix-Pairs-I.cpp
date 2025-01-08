class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans  =0 ; 
        for (int i =0 ;i<words.size();i++)
        {
            for (int j =i+1 ;j<words.size();j++)
            {
                if (words[i].size()<=words[j].size())
                {
                    if (ch(words[i], words[j]))
                       ans++; 
                }
            }
        }
        return ans; 
    }
    bool ch(string& a , string &b)
    {
        bool p = true , s = true;
        for (int i =0 ;i<a.size();i++)
        {
            if (a[i]!=b[i])
            p = false; 
        }
        for (int  i =a.size()-1 ,j = b.size()-1;i>=0;i--,j--)
            if (a[i]!=b[j])
            s = false; 
            return p&&s; 
         

    }
    
};