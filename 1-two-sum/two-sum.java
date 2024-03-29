class Solution {
    public int[] twoSum(int[] nums, int target) {   
     
        HashMap<Integer,Integer> mp=new HashMap<>();
        for(int i=0 ;i<nums.length;i++){
            int n=nums[i];
            int next=target-nums[i];

            if(mp.containsKey(next)){
                return new int[]{i,mp.get(next)};
            }

            mp.put(nums[i],i);
        }

        return new int[]{};
    }
}