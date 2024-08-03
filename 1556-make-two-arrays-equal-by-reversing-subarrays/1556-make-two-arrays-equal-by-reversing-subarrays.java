class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        HashMap<Integer,Integer> mpp= new HashMap<>();

        for(int i:arr){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
        }

        for(int i:target){
            mpp.put(i,mpp.getOrDefault(i,0)-1);

            if(mpp.get(i)==0)
                mpp.remove(i);
        }

        return mpp.size()==0;
    }
}