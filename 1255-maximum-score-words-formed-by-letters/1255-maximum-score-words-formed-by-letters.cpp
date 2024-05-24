class Solution {
public:
    vector<int>freq; 
    int ans =0; 
    vector<int>sc;
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        freq.resize(27); 
        for (auto i : letters)
         {
           freq[i-'a']++; 
         }
         sc = score; 
         solve(0 , words , 0); 
         return ans; 
        
    }
    void solve(int i  , vector<string>words , int cun )
    {
        if (i==words.size())
        {
            cout<<cun<<endl; 
            ans = max(ans , cun);
            return; 
        }
        solve(i+1 , words  ,cun);
        bool f =true; 
        vector<int>ff(27);
        for (auto j: words[i])
            ff[j-'a']++;
        for (int j =0; j<27;j++)
             if (freq[j]<ff[j])
             {
                f = false; 
                break; 
             }
        cout<<f<<endl; 
        if (f)
        {
            int x =0; 
            for (auto j : words[i])
            {
                x+=sc[j-'a']; 
                freq[j-'a']--; 
            }
            solve(i+1 , words , cun+x); 
            for (auto j: words[i])
                freq[j-'a']++; 
        }
    }

};