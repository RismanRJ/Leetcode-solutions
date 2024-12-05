class Solution {
    public boolean search(int[] arr, int target) {
        int n = arr.length;
        int low= 0, high = n-1;

        while(low<=high){
            int mid=(low+high)/2;

            if(arr[mid]==target)return true;
            if(arr[mid]==arr[low] && arr[mid]==arr[high]){
                low++;
                high--;
                continue;
            }
            else if(arr[low]<=arr[mid]){ //left sorted array
                if(arr[low]<=target && target<=arr[mid])high = mid-1; // eliminating right half
                else low= mid+1; // eliminating left half
        }
            else{ // right sorted array
                if(arr[mid]<=target && target <=arr[high]){
                    low=mid+1;// eliminating left half
                }
                else high = mid-1;// eliminating right half
            }
        }
        return false;
    }
}