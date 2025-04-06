class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int minArrows= 1;
       sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int prevEnd = points[0][1];
        int n = points.size();
        for(int i=1;i<n;i++){
            if(points[i][0]>prevEnd){
                prevEnd= points[i][1];
                minArrows++;
            }
        }

        return minArrows;
    }
};