class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int ans =0; 
        vector<int>indx(29); 
        for (int i=0;i<s.size();i++)
        {
            indx[s[i]-'a']=i; 
        }
        for (int i=0;i<t.size();i++)
        {
            ans+=abs(indx[t[i]-'a']-i); 
        }
        return ans; 
    }
};