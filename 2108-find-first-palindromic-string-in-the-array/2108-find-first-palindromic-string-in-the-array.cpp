class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (auto i : words)
        {
            int a =0; 
            for (int l =0 , r = i.size()-1;l<r;l++ ,r--)
            {
                if (i[l]!=i[r])
                {
                    a++; 
                    break; 
                }
                
            }
            if (a==0)
                     return i; 
        }
        return ""; 
    }
};