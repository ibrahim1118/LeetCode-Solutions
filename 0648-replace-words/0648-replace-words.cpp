class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
       map<string,int>mp; 
        for (auto i: dictionary)
            mp[i]++; 
        vector<string>ans;
        string s=""; 
        for (auto i : sentence )
        {
            if (i==' ')
            {
                ans.push_back(s); 
                s=""; 
            }
            else 
                s+=i; 
        }
        if (s.size())
            ans.push_back(s); 
        for (auto &i : ans)
        {
            string x = ""; 
            for (auto j :i)
            {
                x+=j; 
                if (mp.count(x))
                {
                    i = x ; 
                    break; 
                }
            }
        }
        string a=""; 
        for (int i =0;i<ans.size();i++)
        {
            if (i==ans.size()-1)
                a+=ans[i]; 
            else 
                a+=ans[i]+ " "; 
        }
        return a;
    }
};