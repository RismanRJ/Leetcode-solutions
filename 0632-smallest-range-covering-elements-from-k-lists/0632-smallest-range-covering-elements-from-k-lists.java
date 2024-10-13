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
            int ele= arr[0]; // current minimum element in the heap
            int row=arr[1];
            int col= arr[2];
            //checking the current range based on max_right and min_left with curret maxVal in the heap and current min value in the heap
            if(max_r-min_l>max_val-ele){ //(checking the range)){
                min_l=ele; //updating the min_element with minimum element in the heap
                max_r=max_val;//updating the max_element with maximum element in the heap
            }
            if(col<nums.get(row).size()-1){ // check whether the col ranges out of bound
            //it ensures that the range elements{l,r} should be within the range of elements in the list

                max_val= Math.max(max_val,nums.get(row).get(col+1)); //updating the max element on every new adding element into the heap
                pq.offer(new int[]{nums.get(row).get(col+1),row,col+1});
            }
            else break;
        }

        return new int[]{min_l,max_r};


        // TC: o(nlogk)
        //SC:o(k) [for heap storage]
    }
}