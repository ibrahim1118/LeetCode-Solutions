class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
     set<char>st; 
     for (auto i: allowed)
     {
         st.insert(i); 
     }
      int ans =0; 
        for (auto i : words)
        {
            bool ok = true; 
            for (auto j:i)
            {
                if (!st.count(j))
                    ok = false ;
            }
            if (ok)
                ans++; 
        }
        return ans; 
    }
};