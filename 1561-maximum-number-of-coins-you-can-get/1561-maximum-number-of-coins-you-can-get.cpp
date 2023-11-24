class Solution {
public:
    int maxCoins(vector<int>& piles) {
       priority_queue<int>pq; 
       int ans =0 , n =piles.size()/3; 
       for (auto i : piles)
               pq.push(i);
        while(pq.size()>n)
        {
            pq.pop();
            ans+=pq.top(); 
            pq.pop(); 
        }
        return ans; 
        
    }
};