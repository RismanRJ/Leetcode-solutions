class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length==0)return 0;
       int longest =1;
        HashSet<Integer>hash= new HashSet<>();

        for(int i:nums)hash.add(i);

        for(int i:hash){

            //check if i is a starting number
            if(!hash.contains(i-1)){
                int num =i;
                int cnt=1;

                while(hash.contains(num+1)){
                    num++;
                    cnt++;
                }
                longest=Math.max(longest,cnt);
            }
        }


       return longest;
    }
}