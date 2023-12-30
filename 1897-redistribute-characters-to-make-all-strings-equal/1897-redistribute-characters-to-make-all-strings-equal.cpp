class Solution {
public:
    bool makeEqual(vector<string>& words) {
       vector<int>v(27);  
        for (auto i : words)
        {
            for (auto j :i )
                v[j-'a']++;
        }
        for (auto i : v)
        {
            if (i%words.size())
                return false; 
        }
        return true; 
    }
};