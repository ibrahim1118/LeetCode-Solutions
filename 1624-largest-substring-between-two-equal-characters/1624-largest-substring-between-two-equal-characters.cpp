class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        vector<int>l(27) , f(27);
        for (int i=0;i<s.size();i++)
        {
            l[s[i]-'a']=i; 
        }
        for (int i=s.size()-1;i>=0;i--)
        {
            f[s[i]-'a']=i; 
        }
        int ans =-1; 
        for (int i=0;i<27;i++)
        {
            if (l[i]!=f[i])
                ans = max(ans , l[i]-f[i]-1); 
        }
        return ans; 
    }
};