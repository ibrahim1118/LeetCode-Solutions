class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        for (int i=0;i<n;i++)
        {
            code.push_back(code[i]); 
        }
        for (int i=0;i<n;i++)
        {
            code.push_back(code[i]); 
        }
        vector<int>ans; 
        for (int i=n;i<2*n;i++)
        {
            int sum=0; 
            if (k>0)
            {
               cout<<i<<" "; 
                for (int j=i+1;j<=i+k;j++)
                {
                    sum+=code[j]; 
                }
                //ans.push_back(sum); 
            }
            else if (k<0)
            {cout<<i<<" ";
                
                for (int j=i-1;j>=i+k;j--)
                {
                    sum+=code[j]; 
                }
                //ans.push_back(sum); 
            }
            
            
                ans.push_back(sum); 
            
        }
        return ans; 
    }
};