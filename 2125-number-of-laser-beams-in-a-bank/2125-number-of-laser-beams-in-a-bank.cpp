class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int pre =0 ; 
        int ans =0; 
        for (auto i  :bank)
        {
            int c =0; 
            for (auto j :i)
            {
                if (j=='1')
                    c++; 
            }
            if (pre>0 &&c>0)
                ans+=pre*c; 
            if (c)
                pre=c; 
        }
        return ans; 
    }
};