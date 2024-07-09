class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
       double d =0 ; 
       int c =0; 
       for (auto i : customers)
       {
           if (i[0]<c)
           {
               d+= c-i[0]; 
              
           }
           d+=i[1]; 
            c = max(i[0] , c)+i[1]; 
           
       }
        double n = customers.size(); 
        return d/n; 
    }
};