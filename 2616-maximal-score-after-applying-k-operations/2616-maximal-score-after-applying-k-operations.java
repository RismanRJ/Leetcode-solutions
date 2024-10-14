class Solution {
    public long maxKelements(int[] nums, int k) {
        PriorityQueue<Integer> pq= new PriorityQueue<>((a,b)-> b-a);
        for(int i:nums)pq.offer(i);
        long sum=0;
        while(k-->0){
            int ele= pq.poll();
            sum+=ele;
            ele=(int) Math.ceil((ele/3.0));
            pq.offer(ele);
        }

        return sum;

    }
}