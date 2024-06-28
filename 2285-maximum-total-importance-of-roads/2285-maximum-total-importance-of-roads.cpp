class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
      long long ans =0; 
        vector<long long >fre(n);
        for (auto i : roads)
        {
            fre[i[0]]++; 
            fre[i[1]]++;
        }
        sort(fre.rbegin() , fre.rend()); 
        for (auto i : fre)
        {
            ans+=i*n; 
            n--; 
        }
        return ans ;
    }
};