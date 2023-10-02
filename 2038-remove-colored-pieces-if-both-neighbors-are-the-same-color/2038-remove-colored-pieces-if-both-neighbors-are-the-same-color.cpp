class Solution {
public:
    bool winnerOfGame(string colors) {
        int a =0 ,b=0;
        int l =1; 
        for (int i =0;i<colors.size()-1;i++)
        {
            if (colors[i]==colors[i+1])
                l++; 
            else 
            {
                if (l>2)
                {
                    if (colors[i]=='A')
                        a+=(l-2); 
                    else 
                        b+=(l-2); 
                    
                }
                l=1; 
            }
        }
        if (l>2)
                {
                    if (colors[colors.size()-1]=='A')
                        a+=(l-2); 
                    else 
                        b+=(l-2); 
                    
                }
        return a>b; 
    }
};