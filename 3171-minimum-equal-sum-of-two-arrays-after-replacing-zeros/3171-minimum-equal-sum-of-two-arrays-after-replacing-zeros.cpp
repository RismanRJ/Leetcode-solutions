class Solution {
    #define ll long long
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        ll sum1 = 0;
        ll sum2 =0;

        ll zero1 =0, zero2=0;
        for(int i: nums1) {
            if(i==0) {
            zero1++;
            sum1++;
        }
        sum1+=i;
        }
        for(int i: nums2) {
            if(i==0) {
            zero2++;
            sum2++;
        }
        sum2+=i;
        }

    

        if((zero1==0 && sum2>sum1) || (zero2==0 && sum2<sum1)) return -1;
       

        return max(sum1,sum2);

    }
};