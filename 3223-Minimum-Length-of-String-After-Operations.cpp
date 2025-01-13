class Solution {
public:
    int minimumLength(string s) {
       vector<int>v(26); 
       for (auto i: s)
            v[i-'a']++; 
        int ans =0 ; 
       for (auto i: v)
       {
        if (i)
        {
            if (i%2)
            ans++; 
            else 
            ans+=2;
        }
       } 
       return ans; 
    }
};