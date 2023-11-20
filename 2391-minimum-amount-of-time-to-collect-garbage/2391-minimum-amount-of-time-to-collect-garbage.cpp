class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int n = garbage.size(); 
        vector<int>M(n) , P(n), G(n); 
        int lp =-1,lm=-1 , lg=-1; 
        for (int i=0;i<n;i++)
        {
            int p = 0 , m =0 ,g=0; 
            for (auto j : garbage[i])
            {
                if (j=='P')
                    p++ , lp=i; 
                if (j=='G')
                    g++ , lg=i; 
                if (j=='M')
                    m++ ,lm=i; 
            }
            M[i]+=m , P[i]+=p , G[i]+=g; 
        }
        for (int i=1;i<travel.size();i++)
               travel[i]+=travel[i-1]; 
        for (int i=1;i<n;i++)
        {
            P[i]+=P[i-1]; 
            M[i]+=M[i-1]; 
            G[i]+=G[i-1]; 
        }
        if (lp>0)
        P[n-1]+=travel[lp-1]; 
        if (lm>0)
        M[n-1]+=travel[lm-1];
         if (lg>0)
        G[n-1]+=travel[lg-1];
       
      return G[n-1]+P[n-1]+M[n-1]; 
    
    }
};