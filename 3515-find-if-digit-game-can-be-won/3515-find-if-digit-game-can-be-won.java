class Solution {
    public boolean canAliceWin(int[] nums) {
        int singleSum=0, twoDigitSum=0;

        for(int i:nums){
            if(i<10)
                singleSum+=i;
            else if(i>=10){
                twoDigitSum+=i;
            }
        }
        if(singleSum>twoDigitSum)
            return true;
        else if(twoDigitSum>singleSum)
        {
            return true;
        }
        return false;
    }
}