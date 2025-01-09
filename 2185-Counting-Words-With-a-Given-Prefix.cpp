class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans =0  ; 
        for (auto i : words)
        {
            if (i.size()>=pref.size())
            {
                bool ok =true ; 
                for (int j =0;j<pref.size();j++)
                {
                    if (pref[j]!=i[j])
                     {
                        ok= false; 
                        break;
                     }
                }
                if (ok)
                ans++; 
            }
        }
       return ans ; 
    }
};