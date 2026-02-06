class Solution {
public:
    #define ll long long 
    int minRemoval(vector<int>& nums, int k) {
        
        int minEle =INT_MAX, n = nums.size();
        if(n==1) return 0;
        sort(nums.begin(),nums.end());
        int left =0,right=1;
        while(right<n){
            ll MIN = nums[left];
            ll MAX = nums[right];
            if(MAX<=(k*MIN))minEle = min(minEle,n-(right-left+1));
            else left++;
            right++;
        }


        return minEle ==INT_MAX ? n-1: minEle;
    }
};