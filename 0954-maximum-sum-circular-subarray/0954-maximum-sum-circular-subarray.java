class Solution {
    public int maxSubarraySumCircular(int[] nums) {
       int maxSum=nums[0],minSum=nums[0];
       int curMax=0, curMin=0;
       int total=0;

        for(int i:nums){
            curMax+=i;
            curMin+=i;
            total+=i;
            maxSum=Math.max(maxSum,curMax); // kadane's algorithm to find max subarray sum
            minSum=Math.min(minSum,curMin);// kadane's algorithm to find min subarray sum
            if(curMax<0)curMax=0;
            if(curMin>0)curMin=0;
        }
        // check if all elements is negative then return maxSum, else Max(maxSum,(totalArraySum-minSum))
        return  maxSum<0?maxSum: Math.max(maxSum,total-minSum);
    

    }
}