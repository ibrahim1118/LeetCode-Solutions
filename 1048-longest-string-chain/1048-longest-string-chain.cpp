class Solution {
public:
    int longestStrChain(vector<string>& words) {
        vector<pair<int,string>>w; 
        for (auto i : words)
        w.push_back({i.size() ,i}); 
        sort(w.begin() ,w.end()); 
        int n = w.size(); 
        int ans =1; 
        vector<int>dp(n,1);
         for(int i=1; i<n; i++){
            for(int j=0; j<i; j++){
                if(func(w[j].second, w[i].second) && w[j].second.size()+1==w[i].second.size()){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            ans = max(ans, dp[i]);
        }
        return ans; 
        
    }
    bool func(string& a,string& b)
    {
        int ptr1 = 0,ptr2 = 0;
        int n1 = a.size(),n2 = b.size();
        while(ptr1<n1 && ptr2<n2)
        {
            if(a[ptr1]==b[ptr2])
            {
                ptr1++;
                ptr2++;
            }
            else
            ptr2++;
        }
        if(ptr1==n1)
        return true;
        return false;}
};