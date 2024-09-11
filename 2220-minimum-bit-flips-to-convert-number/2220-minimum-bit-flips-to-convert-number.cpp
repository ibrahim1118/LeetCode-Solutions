class Solution {
public:
    int minBitFlips(int start, int goal) {
       bitset<32>s = start , g  =goal; 
       int ans =0; 
        for (int i =0;i<32;i++)
        {
            if (s[i]!=g[i])
                ans++; 
             
        }
        return ans;
    }
};