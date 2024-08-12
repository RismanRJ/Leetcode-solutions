class Solution {
    public int maxFrequencyElements(int[] nums) {
        int maxFreqEle=0;
        int maxFreq=1;

        HashMap<Integer,Integer>mpp = new HashMap<>();

        for(int i:nums){
            mpp.put(i,mpp.getOrDefault(i,0)+1);
            maxFreq= Math.max(maxFreq,mpp.get(i));
        }

        for(int i:nums){
            if(mpp.get(i)==maxFreq){
                maxFreqEle++;
            }
        }

        return maxFreqEle;
    }
}