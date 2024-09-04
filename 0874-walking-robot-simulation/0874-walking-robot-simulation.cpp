class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        set<pair<int,int>>st; 
        for (auto i :obstacles)
        {
            pair a = {i[0] , i[1]}; 
            st.insert(a); 
        }
        int dir = 0 ; 
        int x = 0 , y =0 ;
        int ans = 0 ; 
        for  (auto i : commands)
        {
            if (i==-2)
            {
                dir--; 
                dir=(dir+4)%4; 
            }
            else if (i==-1)
            {
                dir++; 
                dir%=4; 
            }
            else 
            {
            
                while(i--){
                int a =x , b= y; 
                if (dir==0)
                    y+=1; 
                else if (dir==1)
                    x+=1; 
                else if (dir==2)
                    y-=1; 
                else 
                    x-=1; 
                 if (st.count({x , y}))
                 { 
                     x = a ; y = b ; 
                     break; 
                 }
                }
            }
            ans = max(ans , x*x+ y*y); 
        }
        
        return ans; 
    }
};