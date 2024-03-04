class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int ans =0; 
        sort(tokens.begin() , tokens.end()); 
        for (int i=0 , j = tokens.size()-1;i<=j;)
        {
            cout<<power<<" "<<tokens[i]<<endl; 
            if (i==j)
            {
                if (tokens[i]<=power)
                {
                    ans++; 
                    
                }
                break; 
            }
            if (power>=tokens[i])
            {
                ans++; 
                power-= tokens[i]; 
                i++; 
            }
            else 
            {
                if (power+tokens[j]>=tokens[i]&&ans)
                {
                    ans--; 
                   
                    power+=tokens[j]; 
                    j--; 
                }
                else 
                    break; 
            }
        }
      return ans; 
    }
};