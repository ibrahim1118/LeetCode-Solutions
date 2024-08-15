class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f =0 , ten =0 ; 
        for (auto i: bills)
        {
            if (i==5)
                f++; 
            else if (i==10)
            {
                if (f)
                {
                    f-- ; 
                    ten++; 
                }
                else 
                    return false; 
            }
            else 
            {
                if (ten>=1&&f>=1)
                {
                    ten--; 
                    f--; 
                }
                else if (f>=3)
                {
                    f-=3; 
                }
                else 
                    return false ;
            }
        }
        return true; 
    }
};