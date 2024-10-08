class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>s(n); 
        for (int i=1;i<=n;i++)
        {
            string a = to_string(i); 
            s[i-1]=a; 
        }
        sort(s.begin() , s.end()); 
        vector<int>ans ; 
        for (auto i: s)
        {
            int a =0; 
            for (auto j: i)
            {
                a*=10; 
                a+=int(j-'0'); 
            }
            ans.push_back(a); 
        }
        return ans; 
    }
};