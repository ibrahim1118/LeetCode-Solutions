class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int m) {
        int ans=0 ; 
        vector<int>v ; 
        for (int i=0;i<customers.size();i++)
        {
            if (grumpy[i]==0)
            {
                ans+=customers[i]; 
                v.push_back(0); 
            }
            else 
                v.push_back(customers[i]); 
        }
        for (int i =1;i<v.size(); i++)
             v[i]+=v[i-1]; 
        int mx =0; 
        for (int i =0;i+m<=v.size();i++)
        {
             if (i==0)
                 mx = max(v[i+m-1] , mx); 
            else 
                mx = max(v[i+m-1] - v[i-1] , mx); 
        }
        return ans+mx; 
    }
};