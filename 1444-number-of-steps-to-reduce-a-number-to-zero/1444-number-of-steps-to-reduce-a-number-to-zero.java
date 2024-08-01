class Solution {
    public static int reduce(int num, int cnt){
        if(num==0)
            return cnt;
        if(num%2==0){
            return reduce(num/2,cnt+1);
        }

        return reduce(num-1,cnt+1);

    }

    public int numberOfSteps(int num) {
        return reduce(num,0);
    }
}