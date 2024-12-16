class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
       
        priority_queue<pair<int,int>>q;
        for (int i=0;i<nums.size();i++)
        {
            q.push({nums[i]*-1, i*-1}); 
        }
        while(k--)
        {
            auto top =q.top(); 
            q.pop(); 
            top.first*=m; 
            q.push(top); 
        }
        for (int i=0;i<nums.size();i++)
        {
            auto top = q.top(); 
            q.pop(); 
            nums[top.second*-1]=top.first*-1;
        }
        return nums; 
    }
};