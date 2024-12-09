class Solution {
    public List<Integer> intersection(int[][] nums) {
        int[] arr= new int[1001];
        Arrays.fill(arr,0);
        List<Integer>ans= new ArrayList<>();
        int n = nums.length;
        for(int i=0;i<n;i++){
            for(int j=0;j<nums[i].length;j++){
               
                arr[nums[i][j]]++;
            }
        }

        for(int i=0;i<=arr.length-1;i++){
                if(arr[i]==n)ans.add(i);
        }
        
        return ans;
    }
}