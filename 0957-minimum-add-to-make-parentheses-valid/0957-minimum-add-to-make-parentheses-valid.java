class Solution {
    public int minAddToMakeValid(String s) {
        int brack=0,imbalance =0;

        for(char ch:s.toCharArray()) {
            if(ch=='(')brack++;
            else{
                
                if(brack>0)brack--;
                else imbalance++;
            }
        } 
        return imbalance+brack;
    }
}