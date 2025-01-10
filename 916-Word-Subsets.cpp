class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string>ans; 
        vector<int>fre(26); 
        for (auto i: words2)
        {
            vector<int>tem(26); 
            for (auto j :i)
            {
                tem[j-'a']++; 
            }
            for (int j =0 ;j<26;j++)
            {
                fre[j]= max(fre[j] , tem[j]); 
            }
        }
        for (auto i: words1)
        {
            vector<int>tem(26); 
            for (auto j: i)
                tem[j-'a']++; 
            bool ok = true; 
            for (int j =0 ;j<26;j++)
            {
                if (tem[j]<fre[j])
                  ok = false; 
            }
            if (ok)
             ans.push_back(i); 
        }
        return ans; 
    }
};