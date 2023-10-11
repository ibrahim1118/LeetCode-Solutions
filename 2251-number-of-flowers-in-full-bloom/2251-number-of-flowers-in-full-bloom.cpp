class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& f, vector<int>& people) {
       vector<int>s ,e; 
        for (auto i : f)
            s.push_back(i[0]), e.push_back(i[1]);
        sort(s.begin() , s.end()); 
        sort(e.begin() ,e.end()); 
        vector<int>ans; 
        for (auto i : people)
        {
            int a =0 ,b=0; 
            int l =0 ,r = s.size()-1; 
            while(l<=r)
            {
                int mid = l+(r-l)/2; 
                if (s[mid]<=i)
                {
                    a = max(a,mid+1);
                    l= mid+1; 
                }
                else 
                {
                    r = mid-1; 
                }
            }
            l=0 ,r=e.size()-1;
             while(l<=r)
            {
                int mid = l+(r-l)/2; 
                if (e[mid]<i)
                {
                    b = max(b,mid+1);
                    l= mid+1; 
                }
                else 
                {
                    r = mid-1; 
                }
            }
            //cout<<a<<" "<<b<<endl; 
            ans.push_back(a-b); 
        }
        return ans; 
    }
};