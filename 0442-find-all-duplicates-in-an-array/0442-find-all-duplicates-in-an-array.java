class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> ans = new ArrayList<>();
        HashMap<Integer,Integer>mpp = new HashMap<>();

        for(int i:nums){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
            if(mpp.get(i)>1)
                ans.add(i);
        }


        return ans;
    }
}