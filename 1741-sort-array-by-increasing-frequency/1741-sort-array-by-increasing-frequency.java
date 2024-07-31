class Solution {
    public int[] frequencySort(int[] nums) {
        Map<Integer,Integer> mpp = new HashMap<>();

        for(int i:nums){
            if(mpp.containsKey(i)){
                mpp.put(i,mpp.get(i)+1);
            }
            else
                mpp.put(i,1);
        }
        List<Map.Entry<Integer,Integer>> col= new ArrayList<>(mpp.entrySet());
        Collections.sort(col,(x1,x2)->
           x1.getValue() == x2.getValue() ? x2.getKey() - x1.getKey() : (int) (x1.getValue() - x2.getValue()));
        int [] ans= new int[nums.length];
        int index=0;
        for(Map.Entry<Integer,Integer> mp: col){
            int ele= mp.getKey();
            int val= mp.getValue();
            for(int i=0;i<val;i++){
                ans[index++]=ele;
            }
        }

        System.out.println(col);
        return ans;
    }
}