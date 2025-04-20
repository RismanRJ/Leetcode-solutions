class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int ans =0;
        int sum=0;
        for(int i:nums){
            sum+=i;
            if(sum==0) ans++;
        }


        return ans;
    }
};