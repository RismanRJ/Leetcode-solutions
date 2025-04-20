class Solution {
public:
    int numRabbits(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i: nums) mpp[i]++;
        int ans =0;
        for(auto [it,cnt]: mpp){
            ans += ((cnt + it) / (it + 1)) * (it + 1);
        }

        return ans;
    }
};