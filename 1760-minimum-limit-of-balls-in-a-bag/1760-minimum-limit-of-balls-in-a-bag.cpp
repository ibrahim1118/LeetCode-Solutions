class Solution {
public:
    int minimumSize(vector<int>& nums, int ma) {
        int r = *max_element(nums.begin(), nums.end());
        int l = 1;
        int ans = r;
        while(l < r) {
            int mid = (l + r) / 2;
            int d = 0;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] > mid) {
                    if(nums[i] % mid == 0) {
                        d += nums[i] / mid - 1;
                    } else {
                    d += nums[i] / mid;
                    }
                }
            }
            if(d <= ma) {
                ans = mid;
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return ans;
    }
};