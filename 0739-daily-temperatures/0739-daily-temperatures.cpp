class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tem) {
    vector<int> ans(tem.size());
    for (int i = tem.size() - 1; i >= 0; --i) {
        int j = i+1;
        while (j < tem.size() && tem[j] <= tem[i]) {
            if (ans[j] > 0) j = ans[j] + j;
            else j = tem.size();
        }
        
        if (j < tem.size()) ans[i] = j - i;
    }
    return ans;
}
};