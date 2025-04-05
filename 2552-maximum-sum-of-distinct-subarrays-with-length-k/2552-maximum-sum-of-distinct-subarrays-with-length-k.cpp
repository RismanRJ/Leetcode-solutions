class Solution {
    #define ll long long
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        ll ans = 0ll;
        ll currSum= 0;
        int n= nums.size();
        unordered_map<int,int> mpp;
        int l =0,r=0; 
        while(r<k){
            mpp[nums[r]]++;
            currSum+= nums[r];
            r++;
        }

        while(r<=n){
            if(mpp.size()==k)ans = max(ans,currSum);

            if(l<n){
                currSum-=nums[l];
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            if(r<n){
                mpp[nums[r]]++;
                currSum+=nums[r];
            }
            r++;
        }

        return ans;
    }
};