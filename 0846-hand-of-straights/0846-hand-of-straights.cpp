class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
      
        map<int,int>mp; 
        for (auto i : hand)
            mp[i]++; 
        for (auto &i : mp)
        {
           
            int f = i.second; 
            
            while(f--)
            {
                int a = i.first;
                cout<<a<<endl; 
                int x = groupSize; 
                while(x--)
                {
                    if (mp[a])
                    {
                        mp[a]--; 
                        a++; 
                    }
                    else 
                      return false; 
                }
            }
        }
        return true;
    }
};