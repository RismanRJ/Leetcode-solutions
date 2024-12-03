class Solution {
    public String addSpaces(String s, int[] spaces) {
        StringBuilder sb= new StringBuilder();
        int outerCnt=0, arrCnt=0;
        for(char ch: s.toCharArray())
        {   
                if(arrCnt<spaces.length&& outerCnt==spaces[arrCnt]){
                    sb.append(" ");
                    sb.append(ch);
                    outerCnt++;
                    arrCnt++;
                }
                else{
                    sb.append(ch);
                    outerCnt++;
                }
                
        }  
        return sb.toString(); 
    }
}