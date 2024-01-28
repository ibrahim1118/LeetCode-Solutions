class Solution {
public:
    int checksub(vector<vector<int>>& matrix,int r1,int r2,int target){
        unordered_map<int,int> mp;
        int curr=0,ans=0;
        mp[0]=1;
        for(int i=0;i<matrix[0].size();i++){                  
            if(r1>0)                    
                curr+=matrix[r2][i]-matrix[r1-1][i];
            else
                curr+=matrix[r2][i];
            
            if(mp.find(curr-target)!=mp.end())
                ans+=mp[curr-target];
            mp[curr]++;
        }
        
        return ans;
    }
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
       
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++)       
            for(int j=0;j<n;j++){
                if(i>0)
                    matrix[i][j]+=matrix[i-1][j];
            }
        int ans=0;
        for(int i=0;i<m;i++)     
            for(int j=i;j<m;j++)  
                ans+=checksub(matrix,i,j,target);
        return ans;
    }
};