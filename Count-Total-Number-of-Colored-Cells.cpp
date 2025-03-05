class Solution {
public:
    long long coloredCells(int n) {
        vector<long long >v(n); 
        v[0] =1 ;
        long long a =4; 
        for (int i=1;i<n;i++)
        {
           v[i]=v[i-1]+i*a;    
        }
        return v[n-1];
            
    }
};