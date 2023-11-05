class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        if (k>arr.size())
        {
            sort(arr.begin() ,arr.end()); 
            return arr[arr.size()-1]; 
        }
        else
        {
            int win = 0 ; 
            int ans =arr[0]; 
            for (int i =1;i<arr.size();i++)
            {
                if (arr[i]>ans)
                {
                    ans=arr[i]; 
                    win=1; 
                    if (win==k)
                        break; 
                }
                else 
                {
                    win++; 
                    if (win==k)
                        break; 
                }
            }
            return ans; 
        }
    }
};