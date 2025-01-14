class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int x =0; 
        vector<int>ans; 
        vector<int>fre(52); 
        for (int i =0 ;i<A.size();i++)
        {
            fre[A[i]]++; 
            if (fre[A[i]]==2)
            x++; 
            fre[B[i]]++; 
            if (fre[B[i]]==2)
            x++;
            ans.push_back(x);            
        }
        return ans; 
    }
};