class Solution {
    #define ll long long
public:
    long long countInterestingSubarrays(vector<int>& nums, int modulo, int k) {
       ll ans=0;
       ll pref=0;
       unordered_map<ll,ll> mpp;
        mpp[0]=1;
       for(int i: nums){
            if(i%modulo==k) pref++;

            pref%=modulo;

            if(mpp.count((pref-k+modulo)%modulo)){
                ans+=mpp[(pref-k+modulo)%modulo];
            }

            mpp[pref]++;
       }

       return ans;
    }
};