class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans; 
        map<int,int>mp; 
        set<int>st;

        for (auto i :arr1)
        {
            mp[i]++;
        }
        for (auto i : arr2)
        {
            while(mp[i]--)
            {
                ans.push_back(i); 
            }
        }
        for (auto i : mp)
        {
            while(i.second>0)
            {
                i.second--; 
                ans.push_back(i.first); 
            }
        }
        return ans; 
    }
};