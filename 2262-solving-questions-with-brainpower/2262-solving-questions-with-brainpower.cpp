class Solution {
    #define ll long long
public:
    ll findMaximumPositions(vector<ll>& dp, int pos,vector<vector<int>>& questions){
            if(pos>= questions.size())return 0;
            if(dp[pos]!=-1) return dp[pos];

            ll exclude = findMaximumPositions(dp,pos+1,questions);
            ll include = questions[pos][0] + findMaximumPositions(dp,pos+questions[pos][1]+1,questions);

            return dp[pos] = max(exclude,include);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<ll> dp(questions.size(),-1);
        return findMaximumPositions(dp,0,questions);
    }
};