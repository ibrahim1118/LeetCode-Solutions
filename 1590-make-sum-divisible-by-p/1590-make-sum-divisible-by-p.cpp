class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int sum = 0;

        for(int i : nums) {
            sum = (sum + i) % p;
        }

        int target = sum%p;

        if(target == 0) {
            return 0;
        }

        unordered_map<int, int> mp;

        int curr = 0;
        mp[0] = -1;

        int ans= n;
        for(int j = 0; j < n; j++) {
            curr = (curr + nums[j]) % p;

            int remain = (curr - target + p) % p;
            if(mp.find(remain) != mp.end()) {
                ans = min(ans, j - mp[remain]);
            }

            mp[curr] = j;
        }

        if (ans==n)
            return -1; 
        else 
           return ans; 

    }
};