class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        vector<bool> mpp(101);
        int n = nums.size();

        for(int i=n-1;i>=0;i--){
            if(mpp[nums[i]]) return (i/3)+1; // ceiling 
            mpp[nums[i]] =true;
        }

        return 0;
    }
};