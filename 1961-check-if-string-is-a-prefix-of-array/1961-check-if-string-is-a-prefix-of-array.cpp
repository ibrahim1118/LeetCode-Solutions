class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       string ans = ""; 
        for (auto i : words)
        { ans+=i;
           if (ans==s)
              return true; 
        } 
        return ans==s; 
    }
};