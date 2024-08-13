class Solution {
public:
    set<vector<int>>ans;
    vector<int> ca;  
    map<vector<int>, int>mp; 
    void solve(int i , int sum , int t , vector<int>&sub)
    {
        if (sum==t)
        {
            //sort(sub.begin() , sub.end()); 
            ans.insert(sub); 
            return; 
        }
        if (i>=ca.size()||sum>t)
         {
             return; 
         }
       // if (mp[sub])
            //return ; 
        mp[sub] = 1; 
         int an = sum; 
         sub.push_back(ca[i]);
       if (!mp[sub])
         solve(i+1,an+ca[i] , t , sub);
         sub.pop_back();  
         solve(i+1,an , t,sub); 
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        ca = candidates; 
        sort(ca.begin() , ca.end());
        vector<int>sub; 
        solve(0, 0 , target,sub); 
        vector<vector<int>>ans2; 
        for (auto i : ans)
        {
            ans2.push_back(i); 
        }
        return ans2; 
    }
};