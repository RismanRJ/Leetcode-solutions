class Solution {
    public int maximumSwap(int num) {
        char[] arr= Integer.toString(num).toCharArray();
        int[] rtMaxArr= new int[arr.length];
        int n = arr.length;
        rtMaxArr[n-1]=n-1;
        for(int i=n-2;i>=0;i--){
            char dt= arr[i];
            char rtDt=arr[rtMaxArr[i+1]];
            if(dt>rtDt){
                rtMaxArr[i]=i;
            }else{
                rtMaxArr[i]=rtMaxArr[i+1];
            }
        }
        for(int i=0;i<n;i++){
            char dt= arr[i];
            char rtMaxdt= arr[rtMaxArr[i]];
            if(dt<rtMaxdt){
                char temp= arr[i];
                arr[i]=arr[rtMaxArr[i]];
                arr[rtMaxArr[i]]=temp;
                return Integer.parseInt(new String(arr));
            }
        }
        return num;
    }
}