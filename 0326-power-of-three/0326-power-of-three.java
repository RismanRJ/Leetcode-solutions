class Solution {
    public static boolean isPower(int n){
        if(n==0)
            return false;
        else if(n==1)
            return true;
        
        return (n%3==0)&& isPower(n/3);
        
    }
    public boolean isPowerOfThree(int n) {
       return isPower(n);
    }
}