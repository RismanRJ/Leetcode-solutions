class Solution {
    public int[] arrayRankTransform(int[] arr) {
        int[] ans= new int[arr.length];
        int[] temp= arr.clone();
        Arrays.sort(arr);
        HashMap<Integer,Integer>mpp= new HashMap<>();
        int rank=1;
        for(int i:arr){
            if(!mpp.containsKey(i)){
                mpp.put(i,rank);
                rank++;
            }
        }
        for(int i=0;i<arr.length;i++){
            ans[i]= mpp.get(temp[i]);
        }
        return ans;
    }
}