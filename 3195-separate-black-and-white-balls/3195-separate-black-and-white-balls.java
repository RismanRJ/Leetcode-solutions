class Solution {
    public long minimumSteps(String s) {
        int black=0;
        long min=0;
        for(char ch:s.toCharArray()){
            if(ch=='0'){
                min+= (long)black; // logic -->calculate the no of black balls
                // if white ball is found swap with the black balls on its left
            }
            else
                black++; // else --> count the number of black balls
        } 
        return min;
    }
}