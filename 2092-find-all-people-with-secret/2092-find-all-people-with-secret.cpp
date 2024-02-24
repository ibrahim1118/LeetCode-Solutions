class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        map<int,vector<pair<int,int>>>adj; 
        for (auto i : meetings)
        {
            adj[i[2]].push_back({i[0] , i[1]}); 
        }
        vector<bool>k(n); 
        k[0]=true ,k[firstPerson] =true ;
        for (auto i : adj)
        {
            unordered_map<int, vector<int>> graph;  
            unordered_set<int> st;  

            for (auto& [x, y] : i.second) {
                graph[x].push_back(y); 
                graph[y].push_back(x); 
                if (k[x]) st.insert(x); 
                if (k[y]) st.insert(y); 
            }

            queue<int> q; 

            for (auto& x : st) q.push(x); 
            
            while (q.size()) {
                auto x = q.front(); q.pop(); 
                for (auto& y : graph[x]) 
                    if (!k[y]) {
                        k[y] = true; 
                        q.push(y); 
                    }
            }  
            
        }
        vector<int>ans; 
        for (int i =0;i<n;i++)
        {
            if (k[i])
                ans.push_back(i); 
        }
        return ans;     
                    
    }
};