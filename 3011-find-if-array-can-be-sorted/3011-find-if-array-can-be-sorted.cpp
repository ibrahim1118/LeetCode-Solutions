class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        if (nums.size()==1)
            return true; 
        for (int i=0;i<nums.size();i++)
        {
            int j=i+1;
            bitset<32> a = nums[i]; 
            bitset<32> b = nums[j]; 
            while(j<nums.size() &&b.count()==a.count())
            {
                j++; 
                if (j<nums.size())
                    b = nums[j]; 
            }
            sort(nums.begin()+i, nums.begin()+j); 
        }
        return is_sorted(nums.begin(),nums.end()); 
    }
};