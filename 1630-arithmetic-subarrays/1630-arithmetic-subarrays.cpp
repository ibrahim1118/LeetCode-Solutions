class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans; 
        for (int i=0;i<l.size();i++)
        {
           ;
            vector<int>a ; 
            for (int j = l[i] ;j<=r[i];j++)
            {  
                a.push_back(nums[j]); 
                 
            }
            sort(a.begin() , a.end());
            int d = a[0]-a[1];
            int b =0;
            for (int j = 1 ;j<a.size()-1;j++)
            {  
               if (d!=a[j]-a[j+1])
               { b++;
                break;}
            }
            ans.push_back(b==0); 
        }
        return ans; 
    }
};