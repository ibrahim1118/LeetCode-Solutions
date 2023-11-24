class Solution {
public:
    int maxCoins(vector<int>& piles) {
       priority_queue<int>pq; 
       int ans =0 , n =piles.size()/3; 
       sort(piles.begin(),piles.end()); 
       for (int i=n;i<piles.size();i+=2)
        ans+=piles[i];
        return ans;
    }
};