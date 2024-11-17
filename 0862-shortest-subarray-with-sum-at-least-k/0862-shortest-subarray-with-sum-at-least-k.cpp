class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        deque<int>q;
        int ans = INT_MAX;
        vector<long long >pre;
        for(auto i:nums) pre.push_back(i);
        for(int i=0;i<nums.size();i++){
            if(i>0){
                pre[i]+=pre[i-1];
                
            }
            if(pre[i]>=k){
                ans=min(ans,i+1);
            }
            
                while(!q.empty() && pre[i]-pre[q.front()]>=k){
                    ans = min(ans,i-q.front());
                    q.pop_front();
                }
                while(!q.empty() && pre[i]<=pre[q.back()]){
                    q.pop_back();
                }
            q.push_back(i);
        }
        return ans==INT_MAX?-1:ans;
    }

};