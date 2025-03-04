class Solution {
public:
vector<int>v; 
int n ; 
    bool checkPowersOfThree(int n2) {
        n = n2; 
        for (int i =0;i<18;i++)
        {
            v.push_back(pow(3 , i)); 
        }
        return solve(0 , 0 );
    }
    bool solve(int ind , int sum)
    {
        if (sum==n)
           return true; 
        if (sum>n)
        return false; 
        if (ind>=v.size())
         return false; 
        return solve(ind+1 , sum+v[ind])||solve(ind+1 , sum); 
    }
};