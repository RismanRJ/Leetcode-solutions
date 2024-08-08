class Solution {
    
    // public static boolean isValid(int r, int c , int n ,int m){
    //     return (r>=0 && r<n && c>=0 && c<m);
    // }

    public int[][] generateMatrix(int n) {
        int[][] ans= new int[n][n];
        int total= n*n;
        int fRow=0;
        int lRow= n-1;
        int fCol=0;
        int lCol=n-1;
        int cnt=1;
        while(cnt<=total){

            //right
            
            for(int i=fCol;cnt<=total&&i<=lCol;i++){
                ans[fRow][i]=cnt++;
            }
            fRow++;

            //down
            for(int i=fRow;cnt<=total&&i<=lRow;i++){
                ans[i][lCol]=cnt++;
            }
            lCol--;

            //left
            
            for(int i=lCol;cnt<=total&&i>=fCol;i--){
                    ans[lRow][i]=cnt++;
            }
            lRow--;
            
            //top

            for(int i=lRow;cnt<=total&&i>=fRow;i--){
                ans[i][fCol]=cnt++;
            }
            fCol++;

        }


        return ans;
    }
}