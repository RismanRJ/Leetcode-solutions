class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mpp;
        for(int i: arr1) mpp[i]++;
        vector<int> ans;

        for(int i: arr2){
            while(mpp[i]--){
                ans.push_back(i);
            }
        }

        for(auto &[it,cnt]:mpp){
            while(cnt>0 && cnt--) ans.push_back(it);
        }


        return ans;
    }
};