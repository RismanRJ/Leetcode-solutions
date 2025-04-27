class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
         unordered_map<int, set<int>> r;
        unordered_map<int, set<int>> c;

      
        for (auto& b : buildings) {
            int x = b[0], y = b[1];
            r[x].insert(y);
            c[y].insert(x);
        }

        int cnt = 0;
        for (auto& b : buildings) {
            int x = b[0], y = b[1];
            auto& row = r[x];
            auto& col = c[y];

           
            bool l = row.lower_bound(y) != row.begin();
            bool r = next(row.lower_bound(y)) != row.end();
            bool u = col.lower_bound(x) != col.begin();
            bool d = next(col.lower_bound(x)) != col.end();

            if (l && r && u && d) {
                cnt++;
            }
        }

        return cnt;
    }
};
