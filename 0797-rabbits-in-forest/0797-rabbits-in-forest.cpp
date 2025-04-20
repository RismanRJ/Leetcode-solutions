class Solution {
public:
    int numRabbits(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(int i: nums) mpp[i]++;
        int ans =0;
        for(auto [it,cnt]: mpp){
            int groupSize= it+1; // no of rabbits + 1;
            int groups = ceil((double)cnt/(double)groupSize);

            ans+= groups*groupSize;
        }

        return ans;
    }
};