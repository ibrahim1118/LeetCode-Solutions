class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int n, int m, int r, int c) {
        vector<vector<int>> v;
        v.push_back({r, c});
        int tot = n * m; 
        int steps = 1; 

        vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dirIndex = 0; 

        while (v.size() < tot) {
            for (int i = 0; i < 2; ++i) { 
                for (int j = 0; j < steps; ++j) {
                    r += dir[dirIndex][0];
                    c += dir[dirIndex][1];

                    if (r >= 0 && r < n && c >= 0 && c < m) {
                        v.push_back({r, c});
                    }
                }
                dirIndex = (dirIndex + 1) % 4; 
            }
            ++steps; 
        }

        return v;
    }
};
