class Solution {
public:
    int largestCombination(vector<int>& can) {
        vector<int> fre(33); 
        for (auto i: can)
        {
            bitset<32> x= i ; 
            for (int j=0;j<32;j++)
            {
                if (x[j])
                      fre[j]++; 
            }
        }
        sort(fre.rbegin() , fre.rend()); 
        return fre[0];
    }
};                                    