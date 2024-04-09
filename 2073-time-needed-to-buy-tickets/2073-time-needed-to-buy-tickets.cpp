class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q; 
        for (int i=0;i<tickets.size();i++)
            q.push(i); 
        int ans =0; 
        while(tickets[k]>0)
        {
            int f = q.front();
            q.pop(); 
            if (--tickets[f]>0)
                q.push(f); 
            ans++; 
        }
        return ans; 
    }
};