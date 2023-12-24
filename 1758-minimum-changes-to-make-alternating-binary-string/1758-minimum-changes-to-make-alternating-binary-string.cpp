class Solution {
public:
    int minOperations(string s) {
        int ans1 =0 , ans2 =0; 
        string ss=""; 
        string sss=""; 
        for (int i=0;i<s.size();i++)
        {
            if (i%2)
                ss+='1' , sss+='0'; 
            else 
                ss+='0' ,sss+='1'; 
        }
        cout<<ss<<" "<<sss; 
        for (int i=0;i<s.size();i++)
        {
            if (s[i]!=ss[i])
                ans1++; 
            if (s[i]!=sss[i])
                ans2++; 
        }
        return min(ans1 , ans2); 
    }
};