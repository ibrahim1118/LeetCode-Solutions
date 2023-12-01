class Solution {
public:
    vector<string> findRestaurant(vector<string>& l1, vector<string>& l2) {
        int mx =1e9;  
        for (int i=0;i<l1.size();i++)
        {
            for (int j =0;j<l2.size();j++)
                if (l1[i]==l2[j])
                    mx= min(i+j , mx); 
        }
        vector<string>ans; 
        for (int i=0;i<l1.size();i++)
        {
            for (int j =0;j<l2.size();j++)
                if (l1[i]==l2[j]&&i+j==mx)
                      ans.push_back(l1[i]); 
                     
        }
        return ans;
    }
};