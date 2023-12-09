class Solution {
public:
    string toGoatLatin(string se) {
     string ans = ""; 
     string a =""; 
     int aa=1; 
     for (auto i : se)
     {
         if (i==' ')
         {
             if (a[0]=='a'||a[0]=='e'||a[0]=='i'||a[0]=='o'||a[0]=='u'||a[0]=='A'||a[0]=='E'||a[0]=='I'||a[0]=='O'||a[0]=='U')
             {
                 cout<<a<<endl; 
                 a+="ma"; 
                 ans+=a; 
                 for (int k =0;k<aa;k++)
                     ans+='a';
                 ans+=' '; 
             }else 
             {
                 cout<<a<<endl; 
                 for (int j=1;j<a.size();j++)
                     ans+=a[j];
                 ans+=a[0]; 
                 ans+="ma";
                 for (int k =0;k<aa;k++)
                     ans+='a';
                 ans+=' '; 
             }
            a=""; 
            aa++;
         }
         else {
             a+=i; 
         }
     }
    if (a[0]=='a'||a[0]=='e'||a[0]=='i'||a[0]=='o'||a[0]=='u'||a[0]=='A'||a[0]=='E'||a[0]=='I'||a[0]=='O'||a[0]=='U')
             {
                cout<<a<<endl; 
                 a+="ma"; 
                 ans+=a; 
                 for (int k =0;k<aa;k++)
                     ans+='a';
                  
             }else 
             {
                 cout<<a<<endl; 
                 for (int j=1;j<a.size();j++)
                     ans+=a[j];
                 ans+=a[0];
                 ans+="ma";
                 for (int k =0;k<aa;k++)
                     ans+='a';
                  
             }
        return ans; 
    }
};