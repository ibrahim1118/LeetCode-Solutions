class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mp; 
        for(auto i : t) 
            mp[i]++; 
        int count = 0; 
        int l = 0, min_len = INT_MAX, min_start = 0;     
        for(int i = 0; i<s.size(); i++) {
            if(mp[s[i]] > 0) 
                count++; 
              mp[s[i]]--; 
            if(count == t.length()) { 
                while(l < i && mp[s[l]] < 0) 
                    mp[s[l]]++, l++; 
                if(min_len > i-l) 
                {
                    min_start = l; 
                    min_len = i-l+1; 
                }
                mp[s[l++]]++; 
                count--; 
            }
        }
        return min_len == INT_MAX ? "" : s.substr(min_start, min_len); 
    }
};