class Solution {
public:
    string largestOddNumber(string num) {
       int n =-1; 
        for (int i=0;i<num.size();i++)
        {
            int a = int(num[i]-'0'); 
            if (a%2)
                n=i;
        }
        string ans =""; 
        for (int i=0;i<=n;i++)
              ans+=num[i]; 
        return ans;
    }
};