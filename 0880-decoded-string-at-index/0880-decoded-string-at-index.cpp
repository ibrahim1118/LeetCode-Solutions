class Solution {
public:
    string decodeAtIndex(string s, int k) {
       long long l =0; 
        for (auto i :s)
        {
            if (i>='0'&&i<='9')
            {
                l*=(i-'0'); 
            }
            else 
                l++; 
        }
        cout<<l;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i]>='0'&&s[i]<='9') {
                l/= (s[i] - '0');
                k = k % l;
            } else {
                if (k == 0 || l == k)
                    return (string("") + s[i]); 
                l--;
            }
        }
        return ""; 
    }
};
