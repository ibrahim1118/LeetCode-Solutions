class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       vector<int>ans; 
       for (int i=1;i<9;i++)
       {
           int temp =i; 
           while(temp%10<=9&&temp<=high)
           {
               if (temp>=low)
                   ans.push_back(temp); 
               int last = temp%10; 
               if (last==9)
                   break; 
               else 
               { temp*=10;
                  temp+=last+1; 
                }
               
           }
       }
       sort(ans.begin() , ans.end()); 
       return ans; 
    }
};