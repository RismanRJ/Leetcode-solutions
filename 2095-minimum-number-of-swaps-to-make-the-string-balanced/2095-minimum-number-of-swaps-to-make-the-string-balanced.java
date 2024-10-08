class Solution {
    public int minSwaps(String s) {
        int stSize=0;
        for(char ch : s.toCharArray()){
            if(ch=='[')stSize++;
            else{
                if(stSize>0)stSize--;
            }
        }

        return (stSize+1)/2;
    }
}