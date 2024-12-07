class Solution {

    public static boolean isPossible(int[] bloomDay, int m, int k, int day){
        int cnt=0, noOfBouq= 0;

        for(int i: bloomDay){
                if(i<=day){
                    cnt++;
                }
                else{
                    noOfBouq+= (cnt/k);
                    cnt=0;
                }
        }
         noOfBouq+= (cnt/k);
         return noOfBouq>=m;
    }

    public int minDays(int[] bloomDay, int m, int k) {
        long val = (long) m*k;
         if(val>bloomDay.length)return -1;
        int min=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;

        for(int i: bloomDay){
            min =Math.min(min,i);
            max=Math.max(max,i);
        }


        int low=min, high=max;

        while(low<=high){
            int mid = low + (high-low)/2;

            if( isPossible(bloomDay, m , k,mid))high =mid-1;
            else low=mid+1;

        }

        return low;
    }
}