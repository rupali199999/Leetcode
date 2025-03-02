class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        vector<vector<pair<int, int>>> adj(n + 1);
        for (auto it : times) {
            adj[it[0]].push_back({it[1], it[2]});
        }
        stack<int> st;
        vector<int> dis(n + 1, -1);
        // pq pair: {distance,node}
        priority_queue < pair<int,int>, vector < pair<int,int> > , greater < pair<int,int> >> pq;
        dis[0] = 0;
        dis[k] = 0;
        pq.push({0,k});
        int minTime = -1;
        while (!pq.empty()) {
            auto p = pq.top();
            int dist = p.first;
            int node = p.second;
            pq.pop();
            for(auto it:adj[node]){
                if(dis[it.first]==-1 || dis[it.first]>dist+it.second){
                    dis[it.first] = dist+it.second;
                    pq.push({dis[it.first],it.first});
                }
            }
        }

        for (int i : dis) {
            if (i == -1)
                return -1;
            minTime = max(i, minTime);
        }
        return minTime;
    }
};