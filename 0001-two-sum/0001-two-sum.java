class Solution {
    public int[] twoSum(int[] nums, int target) {
       int ans[] ={-1,-1};
       HashMap<Integer,Integer>mpp= new HashMap<>();
       for(int i=0;i<nums.length;i++){
        int rem = target-nums[i];
        if(mpp.containsKey(rem)){
            ans[0]=i;
            ans[1]=mpp.get(rem);
        }
        else mpp.put(nums[i],i);
       }
        return ans;
    }
}