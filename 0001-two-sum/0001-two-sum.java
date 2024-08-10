class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> hash = new HashMap<>();
        int ans[] = {-1,-1};
        for(int i=0;i<nums.length;i++){
            int sum= nums[i];
            int rem = target-sum;
            if(hash.containsKey(rem)){
                int index= hash.get(rem);
                ans[0]=i;
                ans[1]=index;
                return ans;
            }
            else
                hash.put(nums[i],i);
        }
        return ans;
    }
}