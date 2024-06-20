class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
     int ans =0; 
     int l =0  ,r =1e9 ; 
      sort(position.begin() , position.end());
     while(l<=r)
     {
         int mid = l + (r-l)/2; 
         int las = position[0]; 
         int x =1; 
         for (auto i : position)
         {
             if (i - las>=mid)
             {
                 las = i ; 
                 x++; 
             }
         }
         if (x>=m)
         {
             ans = max(mid , ans); 
             l = mid+1; 
         }
         else 
             r = mid-1; 
         
     }
        return ans; 
    }
};