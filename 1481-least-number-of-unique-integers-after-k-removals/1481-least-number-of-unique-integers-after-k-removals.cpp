class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp; 
        for (auto i : arr)
            mp[i]++; 
        vector<int>v; 
        for (auto i : mp)
            v.push_back(i.second); 
        sort(v.begin() , v.end()); 
        int a =0;
        for (auto i : v)
        {
            if (i<=k)
            { k-=i;
              a++; 
            } 
        }
        return mp.size()-a; 
    }
};