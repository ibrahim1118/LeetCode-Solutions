class Solution {
public:
    int numberOfSubstrings(string s) {
        int ans =0 ;
        vector<int>v(3); 
        int l =0  , r= 0 ; 
        while(r<s.size())
        {
            v[s[r]-'a']++; 
            while(v[0]&&v[1]&&v[2])
            {
                ans+=s.size()-r; 
                v[s[l]-'a']--; 
                l++;
            }
            r++; 
        }
        return ans; 
    }
};