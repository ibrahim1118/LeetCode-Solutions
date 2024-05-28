class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int>pre(s.size()); 
        for (int i=0;i<s.size();i++)
        {
            pre[i] = abs(s[i]- t[i]); 
        }
       
        for (int i=1;i<pre.size();i++)
              pre[i]+=pre[i-1]; 
         for (auto i : pre)
            cout<<i<<" "; 
        int ans =0 ;
        int l =1 ,r= s.size(); 
        while(l<=r)
        {
            int mid = (l+r)/2; 
            bool ok =false; 
            for (int i=0, j=mid-1;j<pre.size();i++ , j++)
            {
                if (i==0)
                {
                    if (pre[j]<=maxCost)
                    {
                        ok = true; 
                        break; 
                    }
                }
                else 
                {
                    if (pre[j]-pre[i-1]<=maxCost)
                    {
                        ok = true; 
                        break; 
                    }
                }
            }
            if (ok)
            {
                ans = max(ans, mid); 
                l = mid+1; 
            }
            else 
                r = mid-1;  
        }
        return ans;
    }
};