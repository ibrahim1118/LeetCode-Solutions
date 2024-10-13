class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
      vector<pair<int,int>>v; 
      for (int i=0;i<nums.size();i++)
      {
          for (auto j:nums[i])
              v.push_back({j , i}); 
      }
      sort(v.begin() , v.end()); 
      int len = 1e9 ,  l = -1 , r = -1; 
      vector<int>cnt(100005); 
      int x =0;
      int j=0; 
      for (int i=0;i<v.size();i++)
      {
          cnt[v[i].second]++;
          if (cnt[v[i].second]==1)
              x++; 
          while(x>=nums.size())
          {
             int range = v[i].first-v[j].first; 
             if (range<len)
             {
                  l = v[j].first ,r = v[i].first; 
                 len = range; 
              }
             cnt[v[j].second]--; 
             if (cnt[v[j].second]==0)
                 x--; 
             j++; 
          }
      }
       return {l ,r}; 
    }
};