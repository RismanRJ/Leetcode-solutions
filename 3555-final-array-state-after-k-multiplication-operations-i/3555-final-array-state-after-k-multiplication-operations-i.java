class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {

        PriorityQueue<int[]> pq= new PriorityQueue<>((a, b) -> {
            int valueComparison = Integer.compare(a[0], b[0]);
            if (valueComparison == 0) {
                return Integer.compare(a[1], b[1]);
            }
            return valueComparison;
        });
        for(int i=0;i<nums.length;i++){
            pq.add(new int[]{nums[i],i});
        }
        for(int i=0;i<k;i++){
            int[] ele= pq.poll();
            int idx= ele[1];
            nums[idx]*=multiplier;
            pq.add(new int[]{nums[idx],idx});
        }
        
        return nums;
    }
}