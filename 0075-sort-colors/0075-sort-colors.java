class Solution {
    public void sortColors(int[] arr) {
           int low=0, high =arr.length-1;
           int mid= 0;
            int n =arr.length;
           while(mid<=high){
                if(arr[mid]==0){
                    int temp= arr[low];
                    arr[low]=arr[mid];
                    arr[mid]=temp;
                    low++;
                    mid++;
                }
                else if(arr[mid]==1)mid++;
                else{
                      int temp= arr[mid];
                    arr[mid]=arr[high];
                    arr[high]=temp;
                    high--;
                }
           }

    }
}