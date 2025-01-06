class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<pair<int,int>>v(boxes.size()); 
        for (int i=0;i<boxes.size();i++)
        {
           
               v[i].first =(boxes[i]-'0') ; 
               if (boxes[i]=='1')
               v[i].second = i+1 ;
        }
        for (auto i : v)
        cout<<i.first<<" "<<i.second<<endl; 
        for (int i=1;i<v.size();i++)
        { 
            v[i].first+=v[i-1].first; 
            v[i].second+=v[i-1].second; 
        }
        vector<int>ans; 
        for (int i=0 ;i<v.size();i++)
        {
           int x =0;
           int onesafter = v[v.size()-1].first - v[i].first; 
           cout<<onesafter<<" "; 
           int onesbefor = 0 ; 
           if (i)
            { onesbefor = v[i-1].first;
              cout<<onesbefor; 
              x = abs(v[i-1].second-(i+1)*onesbefor); 
            }
            cout<<endl; 
            //cout<<i<<endl; 
             x+=abs((v[v.size()-1].second-v[i].second)-(i+1)*onesafter ); 
             ans.push_back(x);  
        }
        for (auto i: v)
        cout<<i.first<<" "<<i.second<<endl;       
        return ans; 
    }
};