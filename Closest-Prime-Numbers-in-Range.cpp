class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
      vector<bool>isPrime(1000007 , true);
      isPrime[0] = isPrime[1] = false;
      for (int i=2;i<=1000000;i++)
      {
           if (isPrime[i])
           {
            for (int j = i+i;j<=1000000;j+=i)
            {
                isPrime[j] = false; 
            }
           }
      }
      vector<int>prime; 
      for (int i =left;i<=right;i++)
      {
        if (isPrime[i])
        prime.push_back(i); 
      } 
      if (prime.size()<=1)
        return {-1, -1}; 
     int diff= 1e6; 
     int a  ,b ; 
     for (int i=1;i<prime.size();i++)
     {
          if (prime[i]-prime[i-1]<diff)
          {
            diff = prime[i] - prime[i-1]; 
            a = prime[i-1] , b = prime[i]; 
          }
     }
       return {a , b}; 
    }
};