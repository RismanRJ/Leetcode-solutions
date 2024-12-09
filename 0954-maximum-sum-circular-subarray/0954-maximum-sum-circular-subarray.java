class Solution {
    public int maxSubarraySumCircular(int[] nums) {
       int maxSum=nums[0],minSum=nums[0];
       int curMax=0, curMin=0;
       int total=0;

        for(int i:nums){
            curMax+=i;
            curMin+=i;
            total+=i;
            maxSum=Math.max(maxSum,curMax);
            minSum=Math.min(minSum,curMin);
            if(curMax<0)curMax=0;
            if(curMin>0)curMin=0;
        }

        return  maxSum<0?maxSum: Math.max(maxSum,total-minSum);
    

    }
}