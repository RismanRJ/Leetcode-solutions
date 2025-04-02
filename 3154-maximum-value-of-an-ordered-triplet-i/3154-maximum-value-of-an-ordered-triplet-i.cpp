class Solution {
    #define ll long long
public:
    long long maximumTripletValue(vector<int>& nums) {
        ll ans =0;
        int l_max=nums[0];
        ll max_dif =nums[0]-nums[1];
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            l_max= max(nums[i],l_max);
           ll temp = (ll)(l_max - nums[i+1]);
           if(temp> 0 && temp>max_dif) max_dif = temp;
           temp = (ll)(max_dif* nums[i+2]);
           ans = max(ans,temp);
        }

       
        return ans;  
    }
};