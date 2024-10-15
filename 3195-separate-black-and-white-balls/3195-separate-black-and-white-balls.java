class Solution {
    public long minimumSteps(String s) {
        int black=0;
        long min=0;
        for(char ch:s.toCharArray()){
            if(ch=='0'){
                min+= (long)black;
            }
            else
                black++;
        } 
        return min;
    }
}