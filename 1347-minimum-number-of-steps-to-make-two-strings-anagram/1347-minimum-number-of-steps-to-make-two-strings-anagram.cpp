class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>v(27); 
        for (auto i : s)
            v[i-'a']++; 
        for (auto i : t)
            v[i-'a']--; 
        int ans=0; 
        for (auto i: v)
            if (i>0)
                ans+=i; 
        return ans; 
    }
};