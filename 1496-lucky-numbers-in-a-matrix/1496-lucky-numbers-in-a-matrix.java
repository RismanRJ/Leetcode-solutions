class Solution {
    public static boolean isLuckyNumber(int[][] matrix, int row, int col, int n , int m, int ele){

            //col Search

            for(int i=0;i<n;i++){
                if(ele<matrix[i][col])
                    return false;
            }
            //row search
            for(int i=0;i<m;i++){
                if(ele>matrix[row][i])
                    return false;
            }

            return true;


    }

    public List<Integer> luckyNumbers (int[][] matrix) {
        List<Integer> ans = new ArrayList<>();
        int n = matrix.length;
        int m = matrix[0].length;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    if(isLuckyNumber(matrix,i,j,n,m, matrix[i][j])){
                        ans.add(matrix[i][j]);
                    }

            }
        }


        return ans;
    }
}