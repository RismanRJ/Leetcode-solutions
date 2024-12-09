class Solution {
    public int maxSubarraySumCircular(int[] nums) {
        int gMax=nums[0],gMin=nums[0];
        int total=0;
        int curMax=0,curMin=0;


        for(int i:nums){
            total+=i;
            curMax= Math.max(curMax+i,i);
            gMax= Math.max(curMax,gMax);
            curMin= Math.min(curMin+i,i);
            gMin= Math.min(curMin,gMin);
        }

        return gMax<0?gMax:Math.max(gMax,total-gMin);

    }
}