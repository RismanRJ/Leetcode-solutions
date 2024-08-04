class Solution {
    public int rangeSum(int[] nums, int n, int left, int right) {
        int[] sol = new int[n*(n+1)/2];
        int idx=0;
        int mod=(int)(Math.pow(10,9)+7);
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum=(sum+nums[j])%mod;
                sol[idx++]=sum;
            }
        }
        Arrays.sort(sol);
        int ans=0;
        left=left-1;
        right=right-1;
        for(int i:sol)
            System.out.print(i+" ");
        while(left<=right){

            System.out.print(sol[left]+" ");
                ans=(ans+sol[left++])%mod;
        }

        return ans;
    }
}