class Solution {
public:
    bool find132pattern(vector<int>& nums) {
    int n = nums.size(); 
    vector<int>ma(n);
    stack<int>st; 
    ma[0] = nums[0];
    for (int i=1;i<n;i++)
        ma[i] = min(ma[i-1] , nums[i]); 
    for (int j=n-1;j>=0;j--)
    {
        if (nums[j]>ma[j])
        {
            while(!st.empty()&&st.top()<=ma[j])
                  st.pop(); 
            if (!st.empty()&&st.top()<nums[j])
                   return true; 
            st.push(nums[j]); 
        }
    }
        return false; 
        
    }
};