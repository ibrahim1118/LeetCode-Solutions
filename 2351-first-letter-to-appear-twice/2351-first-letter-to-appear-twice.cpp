class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>v(26); 
        for (auto i : s)
        {   v[i-'a']++;
            if (v[i-'a']==2)
                 return i; 
        } 
        return 'a'; 
    }
};