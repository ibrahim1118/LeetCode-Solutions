class Solution {
public:
    int maximumSwap(int num) {
        string x = to_string(num); 
        for (int i =0;i<x.size();i++)
        {
            int ind = -1; 
            char a = x[i]; 
            for (int j=i+1;j<x.size();j++)
            {
                if (x[j]>=a&&x[j]>x[i])
                {
                    a = x[j]; 
                    ind = j; 
                }
            }
            if (ind!=-1)
            {
                char te = x[i]; 
                x[i] = x[ind]; 
                x[ind] = te; 
                break; 
            }
        }
        
        return  stoi(x);
    }
};