class Solution {
public:
    bool isPathCrossing(string path) {
      map<pair<int,int> , int>vis;
      int x =0 ,y=0; 
      vis[{0 ,0}]++; 
      for (auto i : path)
      {
          if (i=='N')
              x--;
          else if (i=='S')
              x++; 
          else if (i=='E')
              y++; 
          else 
              y--;
          if (vis[{x , y}]>0)
              return true; 
          vis[{x ,y}]++; 
      }
      return false; 
    }
};