class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        map<char , int>mp; 
        for (auto i: tasks)
            mp[i]++; 
        priority_queue<int>q; 
        for (auto i : mp)
            q.push(i.second); 
        int ans =0; 
        while(!q.empty())
        {
            vector<int>a;
            int x =0;
            while(!q.empty()&&a.size()<=n)
            {
                if (q.top()>1)
                    x++; 
                a.push_back(q.top()); 
                q.pop(); 
            }
            if (q.empty()&&x==0)
                ans+=a.size(); 
            else 
                ans+=n+1; 
            for (auto &i: a)
            {
                i--; 
                if (i)
                    q.push(i); 
            }
        }
        return ans; 
    }
};