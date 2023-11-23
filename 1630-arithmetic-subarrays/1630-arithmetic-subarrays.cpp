class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans; 
        for (int i=0;i<l.size();i++)
        {
            set<int>st;
            vector<int>a ; 
            for (int j = l[i] ;j<=r[i];j++)
            {  
                a.push_back(nums[j]); 
                 
            }
            sort(a.begin() , a.end()); 
            for (int j = 0 ;j<a.size()-1;j++)
            {  
               st.insert(a[j]-a[j+1]); 
            }
            ans.push_back(st.size()<=1); 
        }
        return ans; 
    }
};