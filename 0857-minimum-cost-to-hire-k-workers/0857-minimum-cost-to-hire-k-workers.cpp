class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
       double ans = 1e9; 
       int n = wage.size(); 
       vector<pair<double , int>>v(n);
       for (int i =0;i<n;i++)
       {
           v[i] = {double(wage[i])/quality[i] , quality[i]}; 
       }
       sort(v.begin() , v.end());
        for (auto i : v)
            cout<<i.first<<" "<<i.second<<endl; 
       priority_queue<int>pq; 
       int total = 0 ; 
       for (auto i : v)
       {
           total+=i.second; 
           pq.push(i.second); 
           if (pq.size()>k)
           {
               total-=pq.top(); 
               pq.pop(); 
           }
           if (pq.size()==k)
           {
               ans = min(ans , total*i.first); 
           }
       }
       return ans ;
    }
};