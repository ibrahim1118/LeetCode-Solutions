class Solution {
public:
    string countAndSay(int n) {
        vector<string>ans(n); 
        ans[0] = \1\; 
        for (int i =1;i<n;i++)
        {
            string x = \\; 
            char c = ans[i-1][0]; 
            int l =0 ; 
            for (auto j: ans[i-1])
            {
                if (c==j)
                {
                    l++; 
                }
                else 
                {
                    x+=char('0'+l); 
                    x+=c; 
                    l = 1 ; 
                    c = j; 
                }
            }
            x+=char(l+'0'); 
            x+=ans[i-1][ans[i-1].size()-1]; 
            ans[i] = x; 
        }
        return ans[n-1]; 
    }
};