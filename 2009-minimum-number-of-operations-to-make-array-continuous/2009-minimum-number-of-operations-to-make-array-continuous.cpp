class Solution {
public:
    int minOperations(vector<int>& nums) {
        set<int>st; 
        int n=nums.size(),ans=1e9;
        for(int i=0;i<n;i++)
            st.insert(nums[i]);
        vector<int>a; 
        for(auto i:st)
            a.push_back(i);
       // sort(a.begin(),a.end());
        // for (auto i : a)
        //     cout<<i<<" "; 
        cout<<endl; 
        for(int i=0;i<a.size();i++)
        {
            long long  tr =a[i]+n-1;
            //cout<<tr<<endl; 
            int j =i; 
            long long  l =0 ,r = a.size()-1; 
            while(l<=r)
            {
                long long  mid =l+(r-l)/2; 
                if (a[mid]<=tr)
                {
                    
                    j=mid; 
                    l = mid+1; 
                }
                if (a[mid]<tr)
                      l=mid+1; 
                else 
                    r = mid-1; 
            }
            //cout<<i<<" "<<j<<endl; 
            ans=min(ans,n-(j-i+1));
        }
        return ans;
        
        
    }
};