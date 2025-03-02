class Solution {
public:
    const int MOD = 1e9 + 7;
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<long long int, long long int>>> adj(n);
        for(auto r:roads){
            adj[r[0]].push_back({r[1],r[2]});
            adj[r[1]].push_back({r[0],r[2]});
        }
        vector<long long int> ways(n,0);
        vector<long long int> dis(n,-1);
        // pq -> {dis,node}
        priority_queue < pair<long long int, long long int>, vector < pair<long long int, long long int> > , greater < pair<long long int, long long int> >> pq;
        dis[0]=0;
        ways[0]=1;
        pq.push({0,0});
        while(!pq.empty()){
            auto p = pq.top();
            long long int node = p.second;
            long long int dist = p.first;
            pq.pop();
            for(auto it:adj[node]){
                long long int nextNode=it.first;
                long long int nextDist=it.second;

                if(dis[nextNode]==-1){
                    dis[nextNode] = dist + nextDist;
                    ways[nextNode]+=ways[node];
                    pq.push({dis[nextNode],nextNode});
                }
                else if(dis[nextNode] == dist+nextDist){
                    ways[nextNode]=(ways[node]+ways[nextNode])%MOD;
                }
                else if(dis[nextNode] > dist+nextDist){
                    dis[nextNode] = dist + nextDist;
                    ways[nextNode]=(ways[node]%MOD);
                    pq.push({dis[nextNode],nextNode});
                }
            }
        }
        return ways[n-1];
    }
};