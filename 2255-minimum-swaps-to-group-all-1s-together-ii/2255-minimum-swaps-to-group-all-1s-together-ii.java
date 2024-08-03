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
            currOnes-=nums[i]; // remove the current element from the window
            currOnes+= nums[(i+totalOnes)%nums.length]; // add the new element to the window --> to track the last element of window we are using ==> (i+totalOnes)%n
            maxOnes=Math.max(maxOnes,currOnes);
        }

        return totalOnes-maxOnes;

    }
}
