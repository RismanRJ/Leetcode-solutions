class Solution {
    public int findMin(int[] nums) {
        int ans = Integer.MAX_VALUE;
        int low=0, high = nums.length-1;

        while(low<=high){
            int mid=(low+high)/2;
            
            if(nums[low]==nums[mid] && nums[mid]== nums[high]){
                low++;
                high--;
                ans= Math.min(ans,nums[mid]);
                continue;
            }
            else if(nums[low]<=nums[mid] && nums[mid]<=nums[high]){
                ans=Math.min(ans,nums[low]);
                break;
            }
            else if(nums[low]<=nums[mid]){  // left half sorted array
                    ans= Math.min(ans,nums[low]);
                    low=mid+1;
            }
            else{ // right half sorted array
                ans=Math.min(ans,nums[mid]);
                high=mid-1;
            }

        }
        return ans;
    }
}