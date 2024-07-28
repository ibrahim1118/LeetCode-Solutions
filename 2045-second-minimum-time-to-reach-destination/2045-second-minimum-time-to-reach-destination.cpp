class Solution {
public:
    int secondMinimum(int n, vector<vector<int>>& edges, int time, int change) {
        
        vector<int> adj[n+1];
        for(auto &edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        queue<pair<int,int> > q;
        
        vector<pair<int,int> > dis(n+1 , {-1,-1});
        q.push({1,1});
        dis[1].first=0;
        
        while(q.size()){
            auto x = q.front();q.pop();
            int node = x.first , mode = x.second; 
            for(auto to:adj[node]){
                int distance = (mode==1)?dis[node].first:dis[node].second;
                distance++;
                if(dis[to].first ==-1){    
                    dis[to].first = distance;
                    q.push({to,1});
                }else if(dis[to].second ==-1){  
						if(distance == dis[to].first) continue;
                    dis[to].second = distance;
                    q.push({to,2});
                }else{}
            }    
        }
        int len = dis[n].second, currTime=0;
	


        for(int i=0;i<len;i++){
            if((currTime/change)%2==1){
                currTime =( (currTime/change) + 1)*change;
            }
            currTime += time;
        }
        
        return currTime;
    }
};