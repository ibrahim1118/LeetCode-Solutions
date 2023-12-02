class Solution {
public:
    int maxProfit(vector<int>& p) {
       priority_queue<int> q; 
       vector<int>v(10007); 
       for (auto i :p)
       {
           v[i]++; 
           q.push(i); 
       }
       int ans =0; 
       for (int i=0;i<p.size();i++)
       {
           int a = p[i]; 
           v[a]--; 
           int t = q.top();
           while(!q.empty()&&v[t]==0)
           {
               q.pop(); 
               t = q.top(); 
           }
           cout<<t<<" "<<a<<endl; 
           if (v[t])
           {
               ans = max(t-a , ans);
           }
           else 
           q.pop(); 
       }
       return ans; 
    }
};