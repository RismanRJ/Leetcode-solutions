class Solution {
    #define ll long long
public:
    long long countGood(vector<int>& nums, int k) {
        ll ans = 0;
        ll eq_pairs=0;
        unordered_map<ll,ll> mpp;
        ll l=0, r=0;
        ll n = nums.size();
        while(l<n){

            while(r<n && eq_pairs<k){
                mpp[nums[r]]++;
                if(mpp[nums[r]]>1){
                    eq_pairs+= mpp[nums[r]]-1;
                }
                r++;
            }

            if(eq_pairs>=k) ans+= n-r+1;

            mpp[nums[l]]--;
            if(mpp[nums[l]]>0) eq_pairs-=mpp[nums[l]];
            l++;

        }

        return ans;
    }
};