class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int n1Idx = m-1;
        int n2Idx= n-1;
        int rt = m+n-1;

        while(n2Idx>=0){
            if(n1Idx>=0 && nums1[n1Idx]>  nums2[n2Idx]){
                nums1[rt]= nums1[n1Idx];
                n1Idx--;
            }
            else {
                nums1[rt] = nums2[n2Idx];
                n2Idx--;
            }
            rt--;
        }
        
    }
};