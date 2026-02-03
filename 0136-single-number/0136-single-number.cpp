class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++)
            ans ^= nums[i];

        // num xor 0 (num ^ 0) =0;
        // num xor num (num ^ num) =0 ;

        return ans;
    }
};