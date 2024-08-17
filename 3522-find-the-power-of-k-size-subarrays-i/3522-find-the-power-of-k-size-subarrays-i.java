// import java.util.*;

class Solution {
    public int[] resultsArray(int[] nums, int k) {
        int n = nums.length;
        int st[]= new int[n];  // array used for storing longest consecutive subsequence
        st[0]=1; // for the first element it will be the subsequence of its own
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]+1){
                st[i]= st[i-1]+1; // update the longest consecutive sequence
            }
            else
                st[i]=1; // reset if the consecutive subsequence fails
        }
        int[] ans = new int[n - k + 1];
        
        for (int i = 0; i <n-k+1; i++) { // loop until the result size array
            if(st[i+k-1]>=k){ // check the subarray length indexed element is greater or equal to subarray length ==> so that indexed element will be the max element in the subarray
                ans[i]= nums[i+k-1];  // updating the maximum element in the subarray length
            }
            else
                ans[i]=-1;
        }
        
        return ans;
    }
}
