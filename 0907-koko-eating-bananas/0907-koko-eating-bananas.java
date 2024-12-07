class Solution {

    public static int max(int[]piles){
        int max=Integer.MIN_VALUE;

        for(int i:piles)max=Math.max(i,max);

        return max;
    }

    public static int isPossible(int[] piles,int hourly){
        int hrs=0;
        for(int i:piles){
            hrs+= Math.ceil((double)i/(double)(hourly));
        }
        return hrs;
    }
    public int minEatingSpeed(int[] piles, int h) {
        int low=1, high = max(piles);

        while(low<=high){
            int mid= low +(high-low)/2;

            if(isPossible(piles,mid)<=h)high =mid-1;
            else low=mid+1;
            
        }

        return low;
    }
}