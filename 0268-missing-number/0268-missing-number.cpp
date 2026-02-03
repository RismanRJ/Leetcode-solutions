class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totalNaturalSum = 0, totalArrSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            totalNaturalSum += (i + 1);
            totalArrSum += nums[i];
        }

        // missing no = sum_of_n_natural_sum -  sum_of_array

        // it is only applicable -> num in the array is [0, n]

        return totalNaturalSum - totalArrSum;
    }
};