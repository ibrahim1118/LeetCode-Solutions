class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>v(27) ,vv(27); 
        for (auto i : s)
            v[i-'a']++; 
        for (auto i : target)
              vv[i-'a']++; 
        int ans = s.size(); 
        for (int i=0;i<27;i++)
        {
            if (vv[i])
                 ans = min(ans , v[i]/vv[i]); 
        }
        return ans;
    }
};