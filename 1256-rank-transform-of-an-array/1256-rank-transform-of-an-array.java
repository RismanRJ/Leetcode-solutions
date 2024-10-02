class Solution {
    public int[] arrayRankTransform(int[] arr) {
        int[] ans= new int[arr.length];
        //to insert the all the elements in a sorted order
        TreeMap<Integer,Integer>mpp= new TreeMap<>();
        for(int i:arr)
            mpp.put(i,mpp.getOrDefault(i,0)+1);
        
        int rank=1;
        //assign rank to each element
        for(Map.Entry<Integer,Integer>m:mpp.entrySet()){
            mpp.put(m.getKey(),rank);
            rank++;
        }
        for(int i=0;i<arr.length;i++){
            ans[i]= mpp.get(arr[i]);
        }
        return ans;
    }
}