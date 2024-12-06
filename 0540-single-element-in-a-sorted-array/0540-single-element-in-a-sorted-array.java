class Solution {
    public int singleNonDuplicate(int[] nums) {
        int ans =-1;
        int low=1, high= nums.length-2;
        int n = nums.length;
        if(nums.length==1)return nums[0];

        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];


        while(low<=high){

            int mid= (low+high)/2;

            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid]; // check with prev and next elemnt

            else if( ((mid%2)==1 && nums[mid]==nums[mid-1]|| (mid%2==0)&& nums[mid]==nums[mid+1])){ 
                //(if mid is even check for next element or if mid is odd check for prev element)
                //Before pivot element the pattern in (even,odd)-->[(0,1),(2,3)]
                low=mid+1;  // s eliminate left half becoz pivot element will be sure in right half
            }
            else high=mid-1; // s eliminate right half becoz pivot element will be sure in left half
              //(if mid is odd check for next element or if mid is even check for prev element)
                //Before pivot element the pattern in (odd,even)-->[(3,4),(5,6)]

        }
        return ans;
    }
}