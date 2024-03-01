class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one =0; 
        for (auto i :s)
            if (i=='1')
                one++; 
       for (int i=0;i<s.size()-1;i++)
       {
           if (one>1)
           {
               s[i] ='1';
               one--; 
           }else s[i]='0'; 
       }
        s[s.size()-1] ='1';
        return s; 
    }
};