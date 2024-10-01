class Solution {
    public boolean canArrange(int[] arr, int k) {
       int[] bal = new int[k];
       for(int i:arr){
        int rem = i%k;
        if(rem<0)rem+=k;
        bal[rem]++;
       }
       if(bal[0]%2!=0)return false;
       for(int i=1;i<=k/2;i++){
        if(bal[i]!=bal[k-i])return false;
       }
       return true;
    }
}