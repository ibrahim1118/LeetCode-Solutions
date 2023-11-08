class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int a = abs(sx - fx); 
        int b = abs(sy-fy);
        if (a==0&&b==0&&t==1)
               return false; 
         
        return min(a, b) + abs(a - b)<=t;
    }
};