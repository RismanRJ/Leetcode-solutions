class Solution {
    public String convert(String s, int numRows) {
        if(numRows<=1 || numRows>s.length())
            return s;
        

        List<Character> ls[] = new ArrayList[numRows];

        for(int i=0;i<numRows;i++){
            ls[i]=new ArrayList<Character>();
        }

        StringBuilder ans = new StringBuilder();
        int idx=0,dir=1;
        for(char ch : s.toCharArray()){
                ls[idx].add(ch);
                if(idx==0)
                    dir=1;
                else if(idx==numRows-1)
                    dir=-1;
                idx+=dir;
        }
        for(List<Character>r: ls){
            for(char c: r)
                ans.append(c);
        }

        return ans.toString();
    }
}