class Solution {
    public String mergeAlternately(String word1, String word2) {
        StringBuffer sb = new StringBuffer();
        int len1=word1.length(), len2= word2.length();
        int i=0,j=0;
        boolean flag=false;
        while(i<len1&&j<len2){
            if(!flag){
                sb.append(word1.charAt(i++));
                flag=!flag;
            }
            else
              {
                  sb.append(word2.charAt(j++));
                  flag=!flag;
              }
        }

        while(i<len1)    sb.append(word1.charAt(i++));
        while(j<len2)    sb.append(word2.charAt(j++));

        return sb.toString();

    }
}