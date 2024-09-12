class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
    int v[26]={0};
     for (auto i: allowed)
     {
          v[i-'a']++;  
     }
      int ans =0; 
        for (auto i : words)
        {
            bool ok = true; 
            for (auto j:i)
            {
                if (!v[j-'a'])
                    ok = false ;
            }
            if (ok)
                ans++; 
        }
        return ans; 
    }
};