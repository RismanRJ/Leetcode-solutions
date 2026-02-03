class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != 0) {
                swap(nums[i], nums[j]); // initially both starts at same , but
                                        // when j starts zero , it moves forward
                                        // , but i stuck at Zero
                // whenever the j meets non zero element will swap (i,j) &
                // increment i to track next zero th element idx
                i++;
            }
        }
    }
};