class Solution {
public:
    int findLucky(vector<int>& arr) {
      vector<int>fr(502); 
        for (int i : arr)
            fr[i]++; 
        for (int i=501;i>0;i--)
        {
            if (i==fr[i])
                return i; 
        }
        return -1; 
    }
};