class Solution {
    #define ll long long
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        ll ans =0;
        int n= nums.size();
        ll sum=0;
        int l=0,r=0;

        while(r<n){
            sum+=nums[r];
            ll pro_subArray= sum*(r-l+1);
            while(pro_subArray>=k &&  l<=r){
                sum-=nums[l];
                l++;
                int d = r-l+1;
                pro_subArray= sum*d;
            }

            ans+=r-l+1;
            r++;


        }

        return ans;
    }
};