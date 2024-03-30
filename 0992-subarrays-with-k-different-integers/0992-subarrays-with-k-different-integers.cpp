class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return solve(nums, k) - solve(nums, k - 1);
    }
    
    int solve(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        int left = 0, right = 0, count = 0, result = 0;
        
        while (right < n) {
            if (freq[nums[right]] == 0)
                count++;
            freq[nums[right]]++;
            
            while (count > k) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0)
                    count--;
                left++;
            }
            
          
            result += right - left + 1;
            
            right++;
        }
        
        return result;
    }
};