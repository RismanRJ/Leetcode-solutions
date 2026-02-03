class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1, j = n - 1;
        int k = m + n - 1; // total len of array & idx to start the backfilling

        while (j >= 0) { // process still nums2 array len -> that is smaller one

            if (i >= 0 &&
                nums1[i] > nums2[j]) { // first array itself contains bigger one
                                       // and check index out of bound when arr1
                                       // has all bigger elements than arr 2
                nums1[k--] = nums1[i--]; // update from last to avoid overwrites
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};