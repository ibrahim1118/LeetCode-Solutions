class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<pair<int,pair<int,int>>> v; 
        for(int i =0;i<times.size();i++)
        {
            v.push_back({times[i][0] ,{times[i][1] , i}}); 
        }
        sort(v.begin() , v.end()); 
        vector<int>f(10005);
        for (auto i: v)
        {
            int ind =-1; 
            int a=i.first , b = i.second.first , c = i.second.second; 
            for (int j=0;j<10005;j++)
            {
                if (a>=f[j])
                {
                    f[j]=b; 
                    ind = j; 
                    break; 
                }
            }
            if (c==targetFriend)
                return ind; 
        }
        return -1; 
    }
};