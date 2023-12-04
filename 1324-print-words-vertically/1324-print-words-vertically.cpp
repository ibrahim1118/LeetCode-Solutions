class Solution {
public:
    vector<string> printVertically(string s) {
        vector<string> word;
        int ma =0; 
        string a =""; 
        for (auto i : s)
        {
            if (i==' ')
            {
                int x = a.size(); 
                ma = max(ma , x); 
                word.push_back(a); 
                a = "" ; 
            }
            else 
                a+=i; 
        }
        int x = a.size(); 
        ma = max(ma , x); 
        word.push_back(a); 
        a = "" ;
        for (auto &i : word)
        {
            int a = ma - i.size(); 
            for (int j=0;j<a;j++)
                i+=' '; 
            
        }
        //cout<<ma; 
        for (auto i : word)
            cout<<i.size()<<endl; 
        vector<string>ans ; 
        for (int i=0;i<ma;i++)
        {
            string ss = ""; 
            for (int j =0;j<word.size();j++)
                  ss+=word[j][i]; 
            int id =-1; 
            for (int j =0;j<ss.size();j++)
            {
                if (ss[j]!=' ')
                    id = j; 
            }
            string sss = "";
            for (int j =0;j<=id;j++)
                sss+=ss[j]; 
            ans.push_back(sss); 
        }
        return ans; 
    }
};