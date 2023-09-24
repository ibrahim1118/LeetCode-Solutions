class Solution {
public:
    double champagneTower(int n, int r, int q) {
    vector<vector<double>>v(100);
    double a = n;
    vector<double>s; 
     
    v[0] = {a};
    for (int i = 1; i < 100; i++)
    {
        vector<double>vv;
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                if (v[i - 1][0] > 1)
                    vv.push_back((v[i - 1][0] - 1) / 2);
                else
                    vv.push_back(0);
            }
            else if (j == i)
            {
                if (v[i - 1][j-1] > 1)
                    vv.push_back((v[i - 1][j-1] - 1) / 2);
                else
                    vv.push_back(0);
            }
            else
            {
                if (v[i - 1][j - 1] > 1)
                    vv.push_back((v[i - 1][j - 1] - 1) / 2);
                else
                    vv.push_back(0); 
                if (v[i - 1][j] > 1)
                    vv[vv.size() - 1] += (v[i - 1][j] - 1) / 2;
            }
        }
        v[i]= vv;
    }
        if (v[r][q]>1)
             return double(1);
        if (v[r][q]<0)
            return 0; 
        return v[r][q]; 
        
        
    }
};