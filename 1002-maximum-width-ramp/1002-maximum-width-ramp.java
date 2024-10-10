class Solution {
    public int maxWidthRamp(int[] nums) {
        Stack<Integer> st = new Stack<>();

        for(int i=0;i<nums.length;i++){
            if(st.isEmpty() || nums[st.peek()]>nums[i])st.push(i);
        }
        int max=0,n= nums.length;
        for(int i=n-1;i>=0;i--){
                while(!st.isEmpty() && nums[st.peek()]<=nums[i]){
                    max= Math.max(max, i-st.pop());
                }
        }
        return max;
    }
}