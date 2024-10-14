class Solution {
    public long maxKelements(int[] nums, int k) {
        PriorityQueue<Long> pq= new PriorityQueue<>(Collections.reverseOrder());
        for(int i:nums)pq.offer((long)i);
        long sum=0;
        while(k-->0){
            long ele= pq.poll();
            sum+=ele;
            ele=(long) Math.ceil((ele/3.0));
            pq.offer(ele);
        }

        return sum;

    }
}