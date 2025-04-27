class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int cnt=0;
        int n= nums.size();
        int l=0,r=2;
        int mid=1;
        while(r<n){
            int sum= nums[l]+nums[r];
            // cout<<nums[l]<<" "<<nums[mid]<<" "<<nums[r]<<" "<<sum<<endl;
            if(!(nums[mid]&1) &&nums[mid]/2==sum)cnt++;
            mid++;
            l++;
            r++;
        }
        
        return cnt;
    }
};