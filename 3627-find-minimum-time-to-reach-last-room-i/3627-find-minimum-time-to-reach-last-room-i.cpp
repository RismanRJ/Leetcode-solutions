class Solution {
    vector<vector<int>> dir ={{1,0},{-1,0},{0,1},{0,-1}};

    bool isValid(int row, int col , int n , int m,  vector<vector<int>>& dp){
        return row>=0 && row<n && col>=0 && col<m && dp[row][col] ==INT_MAX;
    }
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n = moveTime.size(), m = moveTime[0].size();
        vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
        priority_queue<vector<int>, vector<vector<int>>,greater<vector<int>>> pq;
        moveTime[0][0] =0;
        pq.push({0,0,0});

        while(!pq.empty()){
            auto top = pq.top();
            int row = top[1];
            int col = top[2];
            int time = top[0];
            pq.pop();
            if(time>= dp[row][col]) continue;
            if(row ==n-1 && col ==m-1) return time;
            dp[row][col] = time;


            for(auto d : dir){
                int r = row + d[0];
                int c = col + d[1];

                if(isValid(r,c,n,m,dp)){
                    int t = max(time, moveTime[r][c]) +1 ; // 1 second plus for every new node we are visiting
                    pq.push({t,r,c});
                }
            }
        }


        return -1;

    }
};