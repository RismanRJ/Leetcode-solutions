class Solution {
    public int minGroups(int[][] intervals) {
        List<int[]>events= new ArrayList<>();
        for(int i=0;i<intervals.length;i++){
            events.add(new int[]{intervals[i][0],1});
            events.add(new int[]{intervals[i][1]+1,-1});
        }

         Collections.sort(events, (a, b) -> {
            if (a[0] == b[0]) {
                return Integer.compare(a[1], b[1]); // Sort by type (1 before -1)
            } else {
                return Integer.compare(a[0], b[0]); // Sort by time
            }
        });

        int maxOverLap=0;
        int overlap=0;
        for(int[] event:events){
            overlap+=event[1];
            maxOverLap= Math.max(overlap,maxOverLap);
        }
        return maxOverLap;
    }
}