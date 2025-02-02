class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>v ; 
        int ind =0 ; 
        for (int i =1;i<nums.size();i++)
        {
            if (nums[i]<nums[i-1])
             {
                ind = i ; 
                break;
             }
        }
        cout<<ind<<endl; 
        for (int i =ind;i<nums.size();i++)
        {
            v.push_back(nums[i]);
        }
        for (int i =0 ;i<ind;i++)
        {
             v.push_back(nums[i]);
        }
        return is_sorted(v.begin(), v.end()); 
    }
};