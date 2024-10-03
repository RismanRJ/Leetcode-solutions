class Solution {
    public int minSubarray(int[] nums, int p) {
        long sum=0;
        int cnt=0;
        for(int i:nums)sum+=i;
        int min= nums.length;
        int rem =(int)(sum%p);
        if(rem==0)return 0;
        long preSum=0;
        HashMap<Integer,Integer>mpp= new HashMap<>();
        mpp.put(0,-1);
        for(int i=0;i<nums.length;i++){
            preSum+=nums[i];
            int curr= (int)(preSum%p);
            int target= (curr-rem+p)%p;
            if(mpp.containsKey(target)){
                min=Math.min(min,i-mpp.get(target));
            }
            mpp.put(curr,i);
        }
        return min==nums.length?-1:min;
    }
}