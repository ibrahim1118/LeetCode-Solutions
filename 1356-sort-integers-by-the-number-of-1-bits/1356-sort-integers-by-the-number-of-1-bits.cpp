class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
    vector<int>ans; 
    sort(arr.begin(),arr.end());
    for (int i = 0; i < 16; i++)
    {
        for (auto j : arr)
        {
            bitset<16> a = j; 
            if (a.count() == i)
                ans.push_back(j); 
        }
    }   
    return ans; 
    }
};