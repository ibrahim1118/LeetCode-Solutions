class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int l=1; 
        for (int i=0;i<arr.size()-1;i++)
        {
            if (arr[i]==arr[i+1])
                l++; 
            else 
            {
                if (l>arr.size()/4)
                    return arr[i]; 
                l=1; 
            }
        }
        return arr[arr.size()-1]; 
    }
};