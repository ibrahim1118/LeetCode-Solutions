class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int a =0 ; 
        for (auto i : operations)
        {
            if (i=="X++"||i=="++X")
                a++; 
            else 
                a--; 
        }
        return a; 
    }
};