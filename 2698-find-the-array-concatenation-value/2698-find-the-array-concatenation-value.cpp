class Solution {
    #define ll long long
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        ll ans=0;
        int n=nums.size();
        int l=0,r=n-1;
        while(l<r){
            ans+= stoi(to_string(nums[l])+to_string(nums[r]));
            l++;
            r--;
        }

        if(l==r) ans+=nums[l];
        return ans;
    }
};