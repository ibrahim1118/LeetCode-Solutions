class Solution {
public:
    int longestPalindrome(string s) {
       vector<int>mp(100); 
        for (auto i : s)
              mp[i-'A']++;
        int mx =0; 
        int ans =0; 
        for (auto i : mp)
        {
            if (i%2)
            { ans+=i-1 ; mx++;} 
            else 
                ans+=i; 
        }
        if (mx)
            ans++;
        return ans; 
    }
};