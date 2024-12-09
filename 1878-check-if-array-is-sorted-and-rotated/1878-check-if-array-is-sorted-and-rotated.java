class Solution {
    public boolean check(int[] nums) {
        
        int cnt=0;
        for(int i=0;i<nums.length-1;i++){

            if(nums[i]>nums[i+1]){
                cnt++;
            }
        }

        if(nums[0]<nums[nums.length-1])  // check for circular property 
        //because in rotated sorted array nums[0]> nums[n-1] 
        // so check if it violates the propert , --> so increment count by one
            cnt++;

        return cnt<=1;
    }
}