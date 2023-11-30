class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans; 
        for (int i=1;i<=n;i++)
        {
            if (i%3==0&i%5==0)
                ans.push_back("FizzBuzz"); 
            else if (i%3==0)
                ans.push_back("Fizz"); 
            else if (i%5==0)
                ans.push_back("Buzz");
            else 
            {
                string s =""; 
                int t = i; 
                while(t>0){
                s=char('0'+t%10)+s;
                t/=10; 
                }
                ans.push_back(s); 
            }
            
        }
        return ans; 
    }
};