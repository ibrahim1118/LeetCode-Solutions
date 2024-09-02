class Solution {
public:
    int chalkReplacer(vector<int>& c, int k) {
       long long  sum = 0; 
        for (auto i: c)
            sum+=i; 
        k%=sum; 
        for (int i =0;i<c.size();i++)
        {
            if (c[i]>k)
                 return i; 
            else 
                k-=c[i]; 
        }
        return -1; 
        
    }
};