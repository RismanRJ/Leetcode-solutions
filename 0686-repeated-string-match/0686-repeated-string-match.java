class Solution {
    public int repeatedStringMatch(String a, String b) {
        int cnt=1;
        StringBuilder sb= new StringBuilder(a);

        while(sb.length()<=b.length()){
            sb.append(a);
            cnt++;
            if(sb.toString().contains(b))
                return cnt;
        }

        return -1;
        
    }
}