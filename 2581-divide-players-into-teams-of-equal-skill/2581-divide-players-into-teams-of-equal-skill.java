class Solution {
    public long dividePlayers(int[] skill) {
        Arrays.sort(skill);
        long total=0;
        int n = skill.length;
        long sumSkill= skill[0]+skill[n-1];

        for(int i=0;i<n/2;i++){
            long sum = skill[i]+skill[n-i-1];
            if(sum!=sumSkill)return -1;

            total+=(long) (skill[i]*skill[n-i-1]);
        }

        return total;
    }
}