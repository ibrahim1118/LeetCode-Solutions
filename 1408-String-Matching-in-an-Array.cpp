class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans; 
        for (int i =0 ;i<words.size();i++)
        {
            for (int j = 0 ;j<words.size();j++)
            {
                if (i!=j&&words[i].size()<=words[j].size()&&isSub(words[i], words[j]))
                    {ans.push_back(words[i]);
                      break;
                    }
            }
        }
        return ans; 
    }
    bool isSub(string a , string b)
    {
       for (int l =0  , r= a.size()-1;r<b.size();l++ , r++)
       {  
          bool ok = true; 
         for (int i =0 , j = l; j<=r&&i<a.size();i++ ,j++)
         {
            if (a[i]!=b[j])
            ok = false; 
         }
         if (ok)
         return ok ; 
       }
       return false;
    }
};