class Solution {
public:
    vector<string>s;
    int ans =0; 
    int maxLength(vector<string>& arr) {
        s = arr; 
        solve(0 , {}); 
        return ans; 
    }
     bool isUnique(vector<string> sub)
    {
        int l =0; 
        unordered_set<char>st; 
         for (auto i : sub)
         {
             for (auto j: i)
             {
                 st.insert(j); 
                 l++; 
             }
         }
        return (st.size() ==l);
    }
    void solve(int i , vector<string>sub)
    {
        if (!isUnique(sub))
             return; 
        if (i==s.size())
        {
            int x =0;  
            for (auto j : sub)
            {
               for (auto k : j)
                   x++;  
            }
    
            if (x>ans)
             {   
                 ans=x;
             } 
            return;     
        }
        sub.push_back(s[i]); 
        solve(i+1 , sub); 
        sub.pop_back(); 
        solve(i+1 , sub); 
    }
};