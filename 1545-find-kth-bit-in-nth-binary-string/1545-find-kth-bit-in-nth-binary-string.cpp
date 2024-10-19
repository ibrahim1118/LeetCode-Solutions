class Solution {
public:
    char findKthBit(int n, int k) {
       string s= "0";
       while(n--)
       {
           string a=s ; 
           s+='1'; 
           reverse(a.begin() , a.end()); 
           for (auto i:a)
           {
               if (i=='0')
                   s+='1'; 
                else 
                    s+='0'; 
           }
       }
       return s[k-1]; 
    }
};