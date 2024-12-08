class Solution {

    public static int calcDays(int[] weights, int cap){
        int load=0, days=1;

        for(int i: weights){
            if(load+i>cap){
                days++;
                load=i;
            }
            else load+=i;
        }
        return days;
    }

    public int shipWithinDays(int[] weights, int days) {
            int tot=0,max=Integer.MIN_VALUE;
            for(int i:weights){
                tot+=i;
                max=Math.max(max,i);
            }

            int low=max, high = tot;

            while(low<=high){
                int mid = low + (high-low)/2;

                if(calcDays(weights,mid)<=days)high=mid-1;
                else low=mid+1;

            }
            return low;
    }
}