class Solution {
public:
    int openLock(vector<string>& deadends, string t) {
       set<string>st;
       for (auto i : deadends)
             st.insert(i); 
       unordered_map<string,int>vis; 
       map<char,vector<char>>mp;
        mp['0']= {'1' ,'9'}; 
         mp['1']= {'0' ,'2'};
         mp['2']= {'1' ,'3'};
         mp['3']= {'2' ,'4'};
         mp['4']= {'3' ,'5'};
         mp['5']= {'4' ,'6'};
         mp['6']= {'5' ,'7'};
         mp['7']= {'6' ,'8'};
         mp['8']= {'7' ,'9'};
         mp['9']= {'0' ,'8'};
       queue<pair<string , int>>q; 
       q.push({"0000" ,0}); 
       while(!q.empty())
       {
           auto top = q.front();
           q.pop(); 
           if (vis[top.first])
                continue;
           vis[top.first]=1; 
           if (top.first==t)
                return top.second; 
           if (st.count(top.first))
           {
               
           }
           else 
           {
               for (auto &i: top.first)
               {
                  char z = i;
                  char x = mp[i][0]; 
                  char y = mp[i][1]; 
                  i =x;
                  if (!vis[top.first])
                  q.push({top.first ,top.second+1}); 
                  i=y;  
                  if (!vis[top.first])
                  q.push({top.first ,top.second+1}); 
                   i=z; 
               }
           }
       }
       return -1; 
    }
};