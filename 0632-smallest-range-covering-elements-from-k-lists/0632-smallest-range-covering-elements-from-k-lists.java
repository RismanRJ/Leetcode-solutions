class Solution {
    public int[] smallestRange(List<List<Integer>> nums) {
        PriorityQueue<int[]>pq= new PriorityQueue<>((a,b)->a[0]-b[0]); // it will store {ele, row,col}
        int max_val= Integer.MIN_VALUE;

        int n = nums.size();
        for(int i=0;i<n;i++){
            max_val= Math.max(max_val,nums.get(i).get(0));
            pq.offer(new int[]{nums.get(i).get(0),i,0});
        }

        int min_l=0;//min range-->0
        int max_r=Integer.MAX_VALUE; // max range--> infinity;

        while(true){
            int[] arr= pq.poll();
            int ele= arr[0];
            int row=arr[1];
            int col= arr[2];

            if(max_r-min_l>max_val-ele){
                min_l=ele;
                max_r=max_val;
            }
            if(col<nums.get(row).size()-1){
                max_val= Math.max(max_val,nums.get(row).get(col+1));
                pq.offer(new int[]{nums.get(row).get(col+1),row,col+1});
            }
            else break;
        }

        return new int[]{min_l,max_r};
    }
}