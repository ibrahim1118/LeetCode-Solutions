class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
    int mod = 1e9+7;
    const int n = arr.size();
    long ans = 0;
    vector<int> pre(n, -1);
    vector<int> next(n, n);
    stack<int> st;

    for (int i = 0; i < n; ++i) {
      while (!st.empty() && arr[st.top()] > arr[i]) {
        int index = st.top();
        st.pop();
        next[index] = i;
      }
      if (!st.empty())
        pre[i] = st.top();
      st.push(i);
    }

    for (int i = 0; i < n; ++i) {
      ans +=long(arr[i]) * (i - pre[i]) * (next[i] - i);
      ans %= mod;
    }

    return ans;
    }
};