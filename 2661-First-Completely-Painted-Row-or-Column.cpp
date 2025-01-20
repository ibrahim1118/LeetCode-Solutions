class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
       map<int , unordered_set<int>> st , st1; 
       map<int,pair<int,int>>pos ; 
       for (int i=0;i<mat.size();i++)
       {
        for (int j =0 ;j<mat[0].size(); j++)
        {
            pos[mat[i][j]]= {i , j}; 
            st[i].insert(mat[i][j]); 
            st1[j].insert(mat[i][j]); 
        }
        
       } 
       for (int i=0 ; i<arr.size();i++)
        {
            int x = pos[arr[i]].first ; 
            int y = pos[arr[i]].second; 
            st[x].erase(arr[i]); 
            if (st[x].size()==0)
                return i; 
             st1[y].erase(arr[i]); 
            if (st1[y].size()==0)
                return i;
            
        }
       return -1; 
    }
};