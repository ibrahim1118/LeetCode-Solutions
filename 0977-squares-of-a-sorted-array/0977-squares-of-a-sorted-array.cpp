class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       
        vector<int>freq(10007); 
        for (auto i : nums)
        {
            if (i<0)
                freq[i*-1]++; 
            else 
                freq[i]++; 
        }
        int j =0; 
        for (int i=0;i<10007;i++)
        {
            while(freq[i]>0)
            {
                nums[j] = i*i; 
                j++; 
                freq[i]--; 
            }
        }
        return nums; 
    }
};