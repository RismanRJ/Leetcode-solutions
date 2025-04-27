class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m= nums2.size();
        vector<int> arr;
        for(int i: nums1) arr.push_back(i);
        for(int i: nums2) arr.push_back(i);

        sort(arr.begin(),arr.end());

        int half = arr.size()/2;
        double ans =0;
        if(!(arr.size()&1)){
             ans = ((double)(arr[half-1]+ arr[half])/(double)2.0);
        }
        else {
            ans =((double)arr[half]);
        }

        return ans;
    }
};