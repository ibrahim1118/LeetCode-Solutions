class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size(); 
       int t=0;
        int lp =-1,lm=-1 , lg=-1; 
        for (int i=0;i<n;i++)
        {
    
            for (char j : garbage[i])
            {
                if (j=='P')
                   lp=i; 
                if (j=='G')
                   lg=i; 
                if (j=='M')
                     lm=i; 
                t++;
            }
            
        }
        for (int i=1;i<travel.size();i++)
               travel[i]+=travel[i-1]; 
        if (lp>0)
        t+=travel[lp-1]; 
        if (lm>0)
        t+=travel[lm-1];
         if (lg>0)
        t+=travel[lg-1];
       
      return t; 
    
    }
};