class Solution {
    void dfs(vector<vector<int>>& adj, int node, int cid, vector<int>& dp, int n) {
        dp[node] = cid;
        for (auto next : adj[node]) {
            if (dp[next] == -1) {
                dfs(adj, next, cid, dp, n);
            }
        }
    }

public:
    vector<bool> pathExistenceQueries(int n, vector<int>& arr, int maxDiff, vector<vector<int>>& queries) {
        vector<vector<int>> adj(n);

        for (int i = 0; i < n - 1; i++) {
            if (abs(arr[i + 1] - arr[i]) <= maxDiff) {
                adj[i].push_back(i + 1);
                adj[i + 1].push_back(i);
            }
        }

        vector<int> dp(n, -1);
        int cid = 0;
        
        for (int i = 0; i < n; i++) {
            if (dp[i] == -1) {
                dfs(adj, i, cid++, dp, n);
            }
        }

        vector<bool> ans;
        for (auto& q : queries) {
            ans.push_back(dp[q[0]] == dp[q[1]]);
        }

        return ans;
    }
};
