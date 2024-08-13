class Solution {
    public int addDigits(int num) {
        int len =(int) Math.log10(num);
        len+=1;
        if(len==1)
            return num;
        int ans =0;
        int dummy =num;
        while(len>1){
            while(dummy!=0){
                int last = dummy%10;
                ans+=last;
                dummy/=10;
            }
            dummy=ans;
            len = (int)Math.log10(dummy);
            len+=1;
            ans=0;
        }
        return dummy;
    }
}