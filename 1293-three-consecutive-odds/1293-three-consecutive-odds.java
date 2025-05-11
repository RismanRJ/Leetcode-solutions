class Solution {
    public boolean threeConsecutiveOdds(int[] arr) {

        int length=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]%2==1)
            {
                length++;
                if(length==3)
                    return true;
            }
            else
                length=0;
            
        }

        return false;


    }
}