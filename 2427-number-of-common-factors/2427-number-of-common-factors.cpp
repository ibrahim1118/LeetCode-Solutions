class Solution {
public:
    int commonFactors(int a, int b) {
        vector<int>d(max(a,b)+3); 
        for (int i=1;i*i<=a;i++)
        {
            if (a%i==0)
            {d[i]++; 
            if (i!=a/i)
                d[a/i]++;} 
        }
        for (int i=1;i*i<=b;i++)
        {
            if (b%i==0)
            { d[i]++; 
            if (i!=b/i)
                d[b/i]++;} 
        }
        int ans =0; 
        for (auto i : d){
            //cout<<i<<" "; 
            if (i==2)
                ans++; }
        return ans;
    }
};