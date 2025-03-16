class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int maxSum = INT_MIN;
        int sum =0;
        int l=0,r=0, n = nums.size();
        while(r<n){
            if(mpp[nums[r]]==0)
            {
                if(maxSum<0 && nums[r]<0)
                sum+= nums[r];
                else if(nums[r]>0) sum+=nums[r];
                mpp[nums[r]]=1;
            }
        

            if(nums[r]>sum) sum= nums[r];

            maxSum = max(sum,maxSum);
            r++;
            
        }

        return maxSum;
    }
};