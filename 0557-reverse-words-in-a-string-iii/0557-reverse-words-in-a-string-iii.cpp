class Solution {
public:
    string reverseWords(string s) {
        string ans =""; 
        string a = ""; 
        for(auto i : s)
        {
           
            if (i==' ')
            {
                for (int l =0 ,r=a.size()-1;l<r;l++,r--)
                {
                    char t = a[l]; 
                    a[l] =a[r]; 
                    a[r] =t; 
                }
                 ans+=(a+" "); 
                a ="";
            }
            else 
            { 
                a+=i; 
               
            }
        }
         for (int l =0 ,r=a.size()-1;l<r;l++,r--)
                {
                    char t = a[l]; 
                    a[l] =a[r]; 
                    a[r] =t; 
                }
        ans+=a; 
        return ans; 
    }
};