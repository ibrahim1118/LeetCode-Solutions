class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
     vector<vector<pair<int,int>>>gr(n); 
     for (auto i :flights)
     {
         gr[i[0]].push_back({i[1],i[2]}); 
     }   
     vector<int>cos(n,INT_MAX); 
     queue<vector<int>>q; 
     q.push({src,0,0}); 
     while(!q.empty())
     {
         auto f = q.front(); 
         q.pop();
         int node = f[0]; 
         int ncost = f[1];
         int nstep = f[2]; 
         if (nstep>k)
            continue;
        for (auto [i,j] :gr[node])
        {
            if (j+ncost<cos[i])
            {
                cos[i] = j+ncost;
                q.push({i,cos[i],nstep+1});
            }
        }

     }
     if (cos[dst]==INT_MAX)
          return -1; 
        
        return cos[dst];

    }
};