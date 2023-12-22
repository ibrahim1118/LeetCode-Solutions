class Solution {
public:
    int maxScore(string s) {
        int ans =0; 
        int zero =0 , one =0; 
        for (auto i : s)
        {
            if (i=='1')
                one++; 
        }
        
        for (int i=0;i<s.size()-1;i++)
        {
            if (s[i]=='0')
                zero++; 
            else 
                one--; 
            ans = max(ans , zero+one); 
        }
        return ans;
    }
};