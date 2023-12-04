class Solution {
public:
    string largestGoodInteger(string num) {
        string ans =""; 
        for (int i = 1;i<num.size()-1;i++)
        {
            cout<<i<<" "; 
            if (num[i]==num[i-1]&&num[i]==num[i+1])
            {
                string s = ""; 
                s+=num[i-1]; 
                s+=num[i];
                s+=num[i+1]; 
                if (ans<s)
                    ans = s; 
            }
        }
        return ans; 
    }
};