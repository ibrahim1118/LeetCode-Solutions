class Solution {
public:
    long long findScore(vector<int>& nums) {
       long long ans =0 ; 
       priority_queue<pair<int,int>>pq; 
       for (int i=0;i<nums.size();i++)
       {
           pq.push({nums[i]*-1 , i*-1}); 
       }
       while(!pq.empty())
       {
           auto x = pq.top(); 
           pq.pop();
           int ind = x.second*-1; 
           if (nums[ind])
           {
               nums[ind] =0; 
               if (ind+1<nums.size())
                 nums[ind+1]=0; 
               if (ind-1>=0)
                   nums[ind-1]=0; 
               ans+=x.first*-1; 
           }
       }
        return ans; 
    }
};