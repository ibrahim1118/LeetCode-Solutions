class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int a =0; 
        for(auto &i: pref)
        {
            i = (i^a); 
            a=a^i; 
        }
        return pref; 
    }
};