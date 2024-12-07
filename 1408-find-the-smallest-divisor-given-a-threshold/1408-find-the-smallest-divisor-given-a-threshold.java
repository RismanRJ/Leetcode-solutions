class Solution {
    public static int calc(int[] nums, int div){
        int score=0;

        for(int i:nums){
            score+= Math.ceil((double)i/(double)div);
        }

        return score;
    }
    public static int max(int[] nums){
        int max=Integer.MIN_VALUE;
        for(int i:nums)max= Math.max(i,max);

        return max;
    }
    public int smallestDivisor(int[] nums, int threshold) {
        int low=1, high= max(nums);
        while(low<=high){
            int mid= low + (high-low)/2;
            int score=calc(nums,mid);

            if(score<=threshold)high=mid-1;
            else low=mid+1;
        };
        return low;
    }
}