class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int>f(11); 
        int ans =0  ,j=0; 
        for (int i=0;i<arr.size();i++)
        {
            f[arr[i]]++; 
            bool ok = true; 
            for (int k=j;k<=i;k++)
            {
                if (!f[k])
                {
                    ok=false; 
                }
            }
            if (ok)
            {
                ans++; 
                j=i+1; 
            }
        }
        return ans; 
    }
};