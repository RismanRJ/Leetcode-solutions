class Solution {
    public int minLength(String s) {
        Stack<Character> st= new Stack<>();

        for(char ch:s.toCharArray()){
            boolean flag=false;
            if(!st.isEmpty()){
                char c= st.peek();
                if((ch=='B'&& c=='A')||(ch=='D'&& c=='C')){
                st.pop();
                flag= true;
                }
            }
            if(flag)continue;
            st.push(ch);
        }

        return st.size();
    }
}