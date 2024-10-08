class Solution {
    public int[][] merge(int[][] intervals) {
        Arrays.sort(intervals,new Comparator<int[]>(){
            public int compare(int[] a, int[] b){
                return a[0]-b[0];
            }
        });
        List<List<Integer>>ans= new ArrayList<>();
        for(int i=0;i<intervals.length;i++){
            if(ans.isEmpty()|| intervals[i][0]>ans.get(ans.size()-1).get(1)){
                
                ans.add(Arrays.asList(intervals[i][0],intervals[i][1]));
            }
            else{
                ans.get(ans.size()-1).set(1,Math.max(intervals[i][1], ans.get(ans.size()-1).get(1)));
            }
        }
        int[][] arr= new int[ans.size()][2];
        int idx=0;
        for(List<Integer>ls:ans){
            arr[idx][0]=ls.get(0);
            arr[idx][1]=ls.get(1);
            idx++;
        }
        return arr;   
    }
}