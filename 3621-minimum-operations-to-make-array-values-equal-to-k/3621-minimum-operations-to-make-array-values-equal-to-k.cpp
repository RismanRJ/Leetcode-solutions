class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        vector<bool>mpp(101);
        for(int i: nums) mpp[i]=true;
        int st = k;
        int cnt=0;
        for(int i=1;i<101;i++){
            if(mpp[i] && i>k){
                cnt++;
            }
            if(mpp[i] && i<k) return -1;
        }
        return cnt;
    }
};