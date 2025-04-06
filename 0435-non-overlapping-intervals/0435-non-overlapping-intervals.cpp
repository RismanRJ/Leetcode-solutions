class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[&](auto const &a, auto const &b){
            return a[1]<b[1]; //sort based on end time
        });
        int prev = intervals[0][1];
        int n = intervals.size();
        int ans =0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]<prev) ans++;  // overlapping occurs
            else prev= intervals[i][1]; // update the last event without overlapping
        }

        return ans;
    }
};