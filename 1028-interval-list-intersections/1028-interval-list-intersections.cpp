class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int lt=0,rt=0;

        while(lt<firstList.size() && rt< secondList.size()){
            int lower_limit = max(firstList[lt][0],secondList[rt][0]);
            int upper_limit = min(firstList[lt][1],secondList[rt][1]);

            if(lower_limit<= upper_limit) ans.push_back({lower_limit,upper_limit});

            if(firstList[lt][1]<secondList[rt][1]) lt++;
            else rt++;
        }

        return ans;
    }
};