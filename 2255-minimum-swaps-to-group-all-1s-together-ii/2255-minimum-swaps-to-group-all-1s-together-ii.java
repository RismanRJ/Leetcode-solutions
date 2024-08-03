class Solution {
    public int minSwaps(int[] nums) {
        int totalOnes=0;
        for(int i:nums)
            totalOnes+=i;

        if(totalOnes==nums.length || totalOnes==0)
            return 0;
        
        int currOnes=0;
        for(int i=0;i<totalOnes;i++)
            currOnes+=nums[i];

        int maxOnes=currOnes;

        for(int i=0;i<nums.length;i++){
            currOnes-=nums[i]; // remove checked element
            currOnes+= nums[(i+totalOnes)%nums.length]; // add new element
            maxOnes=Math.max(maxOnes,currOnes);
        }

        return totalOnes-maxOnes;

    }
}