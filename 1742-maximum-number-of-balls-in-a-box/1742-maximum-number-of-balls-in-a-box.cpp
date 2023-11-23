class Solution {
public:
    int countBalls(int l, int h) {
        vector<int>fr(100); 
        int ans =0; 
        for (int i=l;i<=h;i++)
        {
            int s =0; 
            int t=i; 
            while(t>0)
            {
                s+=t%10; 
                t/=10; 
            }
            fr[s]++; 
            ans = max(ans , fr[s]); 
        }
        return ans; 
    }
};