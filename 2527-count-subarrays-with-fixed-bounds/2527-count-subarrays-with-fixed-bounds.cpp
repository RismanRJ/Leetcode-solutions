class Solution {
    #define ll long long
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        ll cnt=0;
        int minIdx=-1;
        int maxIdx=-1;
        int invalid_idx=-1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK) invalid_idx=i;
            
            if(nums[i]==minK) minIdx=i;
            if(nums[i]==maxK) maxIdx=i;

            cnt+= max(min(minIdx,maxIdx)-invalid_idx,0);

        }

        return cnt;
    }
};