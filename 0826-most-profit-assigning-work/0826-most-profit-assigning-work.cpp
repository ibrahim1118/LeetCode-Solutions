class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
       vector<pair<int,int>>v; 
        for (int i =0;i<difficulty.size();i++)
        {
            v.push_back({difficulty[i] , profit[i]}); 
        }
        sort(v.begin() , v.end()); 
        vector<int>mx; 
        int m =0; 
        for (auto i : v)
        {
            m = max(m,i.second); 
            mx.push_back(m); 
        }
        for (auto i : v)
            cout<<i.first<<" "<<i.second<<endl; 
        for (auto i : mx)
            cout<<i<<' '; 
        cout<<endl; 
        int ans =0; 
        for (auto i : worker)
        {
            int l =0 , r = v.size()-1; 
            int ind =-1; 
            while(l<=r)
            {
                int mid= l+(r-l)/2;
                if (v[mid].first<=i)
                {
                    ind = max(ind , mid); 
                    l = mid+1; 
                }
                else 
                {
                    r = mid-1; 
                }
            }
            cout<<ind<<" "; 
            if (ind!=-1)
                ans+=mx[ind]; 
        }
        return ans; 
    }
};