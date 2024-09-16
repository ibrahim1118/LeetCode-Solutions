class Solution {
public:
    int findMinDifference(vector<string>& time) {
       vector<int> v; 
       for (auto i : time)
       {
           int h =int(i[0]-'0')*10+int(i[1]-'0'); 
           int m = int(i[3]-'0')*10+int(i[4]-'0');
           v.push_back(h*60+m); 
           
       }
       sort(v.begin() ,v.end()); 
       int ans= min(1440-(v[v.size()-1]-v[0]) ,v[v.size()-1]-v[0]); 
       for (int i =0;i<v.size()-1;i++)
       {
           ans = min({ans ,1440-(v[i+1]-v[i]),v[i+1]-v[i] }); 
       }
       return ans; 
    }
};