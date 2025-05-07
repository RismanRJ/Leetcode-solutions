class Solution {
    int diji( vector<vector<pair<int,int>>>& adj, int n , int root){
        vector<int> vis(n+1, INT_MAX);

        vis[root]= 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;

        pq.push({root,0});
      

        while(!pq.empty()){
            auto it = pq.top();
            int ele= it.first;
            int d= it.second;
            pq.pop();
            for(auto node : adj[ele]){
                int node_el= node.first;
                int dist = node.second;
                if(dist+d<vis[node_el]){
                    vis[node_el] = dist +d;
                    pq.push({node_el, vis[node_el]});
                }
            }
        }

        int maxTime = *max_element(vis.begin()+1,vis.end());


        return maxTime==INT_MAX?-1:maxTime;

    }
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto it: times){
            adj[it[0]].push_back({it[1],it[2]});
        }

        return diji(adj,n,k);
    }
};