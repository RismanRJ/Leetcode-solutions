class Solution {
    public int findMin(int[] arr) {
        int ans = Integer.MAX_VALUE;
        int low=0, high = arr.length-1;
        while(low<=high){
            int mid= (low+high)/2;

            if(arr[low]<=arr[mid]){  // checking if array is left sorted
                ans=Math.min(ans,arr[low]);  // comparing ans , with arr[low] becoz in left half, arr[low] wil be the 
                                                //minimum
                low=mid+1;  // eliminating left half
            } 
            else{  // checking if array is right sorted
                ans= Math.min(ans,arr[mid]); // comparing ans , with arr[mid] becoz in right half, arr[mid] wil be the 
                                                //minimum
                high= mid-1;// eliminating right half
            }
        }
        return ans;
    }
}