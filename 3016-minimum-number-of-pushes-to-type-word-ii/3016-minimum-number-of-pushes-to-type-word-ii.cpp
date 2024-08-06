class Solution {
public:
    int minimumPushes(string word) {
      vector<int>v(26); 
      for (auto i : word)
          v[i-'a']++; 
        sort(v.rbegin() , v.rend()); 
        int ans =0; 
        for (auto i: v)
            cout<<i<<" "; 
        cout<<endl; 
        for (int i =0;i<26;i++)
        {
            if (i<=7)
                ans+=v[i];
            else if (i<=15)
                ans+=v[i]*2; 
            else if (i<=23)
                ans+=v[i]*3; 
            else 
                ans+=v[i]*4; 
        }
        return ans;
    }
};