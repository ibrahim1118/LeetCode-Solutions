class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
      int ans =0; 
      for (int i =0;i<dist.size();i++)
      {
          dist[i]=ceil(double(dist[i])/speed[i]); 
      }
      sort(dist.begin() , dist.end()); 
      for (int i=0;i<dist.size();i++)
      {
            if (dist[i]>i||i==0)
                ans++; 
          else 
              break; 
      }
    return ans; 
    }
};