class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String, Integer> mpp= new HashMap<>();
        for(String s:arr){
            mpp.put(s,mpp.getOrDefault(s,0)+1);
        }
        int idx=0;
        for(String s:arr){
            int val= mpp.get(s);
            if(val==1){
                idx++;
                if(idx==k){
                    return s;
                }
            }
        }
        
        return "";
    }
}