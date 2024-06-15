class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
    vector<pair<int,int>>vp; 
    for (int i=0;i<p.size();i++)
    {
        vp.push_back({c[i] , p[i]}); 
    }
    sort(vp.begin(), vp.end()); 
    priority_queue<int>pq; 
    int i =0; 
    while(k--)
    {
        while(i<vp.size()&&vp[i].first<=w)
        {
            pq.push(vp[i].second); 
            i++; 
        }
        if (pq.empty())
           break; 
        w+=pq.top(); 
        pq.pop(); 

    }
    return w; 
   
       
        
    }
};