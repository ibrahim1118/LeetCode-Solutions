class Solution {
public:
    
    int constrainedSubsetSum(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq; 
        int ans = nums[0]; 
        pq.push({nums[0] , 0}); 
        for (int i =1;i<nums.size(); i++)
        {
            while(!pq.empty()&&i - pq.top().second>k)
            {
                pq.pop(); 
            }
            ans = max(ans, max(0 , pq.top().first)+nums[i]);
            pq.push({max(0, pq.top().first)+nums[i] , i}); 
        }
        return ans; 
    }
};