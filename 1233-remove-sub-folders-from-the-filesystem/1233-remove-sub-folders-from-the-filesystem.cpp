class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end()); 
        vector<string>ans; 
        for (auto i: folder)
        {
            if (ans.size()==0)
                ans.push_back(i); 
            else {
            string last = ans.back(); 
            if (last.size()+1<i.size())
            {
                last+='/'; 
                int x =0 ; 
                for (int j=0;j<last.size();j++)
                {
                    if (last[j]!=i[j])
                        x++; 
                }
                if (x)
                    ans.push_back(i); 
                    
            }
            else 
                ans.push_back(i);} 
        }
        return ans; 
    }
};