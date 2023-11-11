class Graph {
public:
    vector<vector<pair<int , int>>>adj; 
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n); 
        for (auto i : edges)
            adj[i[0]].push_back({i[1] , i[2]}); 
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].push_back({edge[1] , edge[2]}); 
    }
    
    int shortestPath(int node1, int node2) {
         vector <int> dis(adj.size(),INT_MAX);
        dis[node1]=0;   
        priority_queue<pair<int,int>> pq;  
        
        pq.push({0,node1});
        
        while(pq.size()){
            auto f =pq.top();
            int node = f.second;
            int d = f.first*-1;
            pq.pop();
            for(auto num: adj[node]){
                int w = num.second; 
                int nextNode = num.first;    
                if( dis[node] + w < dis[nextNode] ){
                    dis[nextNode]= dis[node] + w;
                    pq.push({dis[nextNode]*-1, nextNode });    
                }
            }
        }
        if(dis[node2] == INT_MAX)
            return -1;
        return dis[node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */