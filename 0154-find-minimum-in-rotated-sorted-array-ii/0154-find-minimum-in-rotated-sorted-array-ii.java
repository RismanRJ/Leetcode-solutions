class Solution {
    public int findMin(int[] nums) {
        int ans = Integer.MAX_VALUE;
        int low=0, high = nums.length-1;

        while(low<=high){
            int mid=(low+high)/2;
            
            if(nums[low]==nums[mid] && nums[mid]== nums[high]){  // checking if the all elements are equal in rotated sorted array
                low++; // shrink left portion in the array
                high--; // shrink right portion in the array
                ans= Math.min(ans,nums[mid]); // updating ans with minimum
                continue;
            }
            else if(nums[low]<=nums[mid] && nums[mid]<=nums[high]){  // checking if the array is sorted in range(low--> high)
                ans=Math.min(ans,nums[low]); // update the answer with nums[low]
                break;  
            }
            else if(nums[low]<=nums[mid]){  // left half sorted array
                    ans= Math.min(ans,nums[low]);
                    low=mid+1; // eliminating left half
            }
            else{ // right half sorted array
                ans=Math.min(ans,nums[mid]);
                high=mid-1; // eliminating right half
            }

        }
        return ans;
    }
}