class Solution {
public:
    int passThePillow(int n, int time) {
       int dir = time/(n-1); 
       time = time%(n-1); 
       if (dir%2==0)
       {
           return time+1 ; 
       }
       else 
           return n - time; 
    }
};