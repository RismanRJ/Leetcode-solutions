class Solution {
    public int countSeniors(String[] details) {
            int cnt=0;

            for(int i=0;i<details.length;i++){
                StringBuffer sb= new StringBuffer(details[i].substring(11,13));
                // System.out.println(sb);
                int age= Integer.parseInt(sb.toString());
                if(age>60)
                    cnt++;
            }
            return cnt;
    }
}