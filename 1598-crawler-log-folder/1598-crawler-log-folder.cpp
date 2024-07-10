class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ans =0; 
        for (auto i : logs)
        {
            if(i=="./")
            {
                
            }
            else 
            {
                if (i=="../")
                {
                    if (ans)
                        ans--; 
                }
                else 
                    ans++; 
            
            }
        }
        return ans; 
    }
};