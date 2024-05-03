class Solution {
public:
    int compareVersion(string version1, string version2) {
       string v1 ="", v2=""; 
       string a=""; 
       int x =0; 
       for (auto i : version1)
       {
           if (i=='.')
           {
               if (a=="")
               {
                  x++; 
               }
               else 
               {
                   for (int j =0;j<x;j++)
                       v1+="0."; 
                   x =0; 
                   v1+=a; 
                   v1+='.'; 
                   a=""; 
               }
           }
           else 
           {
              // cout<<i<<" "<<a.size()<<end; 
               if (i=='0'&&a.size())
                   a+=i; 
               else if (i!='0')
                   a+=i; 
           }
       }
        if (a.size())
        {  for (int j =0;j<x;j++)
                       v1+="0."; 
                   x =0; 
            v1+=a;
        a="";
        }
        x =0; 
        a=""; 
       
       for (auto i : version2)
       {
           if (i=='.')
           {
               if (a=="")
               {
                  x++; 
               }
               else 
               {
                   for (int j =0;j<x;j++)
                       v2+="0."; 
                   x =0; 
                   v2+=a; 
                   v2+='.'; 
                   a=""; 
               }
           }
           else 
           {
               if (i=='0'&&a.size())
                   a+=i; 
               else if (i!='0')
                   a+=i; 
           }
       }
        if (a.size())
        {  for (int j =0;j<x;j++)
                       v2+="0."; 
                   x =0; 
            v2+=a; }
        cout<<v1<<" "<<v2<<endl; 
       vector<int>x1 , xx ;
       int z =0; 
       for (auto i : v1)
       {
           if (i=='.')
           {
               x1.push_back(z); 
               z =0; 
           }
           else 
           {
               z*=10; 
               z+=int(i-'0'); 
           }
       }
       if (z)
           x1.push_back(z);
        z=0; 
       for (auto i : v2)
       {
           if (i=='.')
           {
               xx.push_back(z); 
               z =0; 
           }
           else 
           {
               z*=10; 
               z+=int(i-'0'); 
           }
       }
        if (z)
            xx.push_back(z); 
        int i =0; 
        for (;i<min(x1.size() , xx.size());i++)
        {
            if (x1[i]<xx[i])
                return -1; 
            else if (x1[i]>xx[i])
                return 1; 
        }
        for (auto i: x1)
            cout<<i<<" "; 
        cout<<endl; 
        for (auto i : xx)
            cout<<i<<" "; 
        if (x1.size()>xx.size())
            return 1; 
        else if (x1.size()<xx.size())
           return -1; 
        return 0 ; 
      
    }
};