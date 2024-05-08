class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       vector<int>s = score; 
        sort(score.rbegin() , score.rend()); 
    
    map<int , string>mp;
    mp[score[0]] = "Gold Medal";
    if (score.size()>1)
    mp[score[1]] = "Silver Medal";  
    if (score.size()>2)
    mp[score[2]]= "Bronze Medal"; 
    for (int i=3;i<score.size();i++)
    {
        string a = ""; 
        a+=to_string(i+1); 
        mp[score[i]] = a; 
    }
     vector<string>ans;
      for (auto  i: s)
      {
          ans.push_back(mp[i]); 
      }
        return ans; 
    }
};