

class Solution {

    public static boolean isMagicSquare(int[][] grid, int row, int col){
        boolean hash[] = new boolean[10];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int num= grid[row+i][col+j];
                if(num<1 || num>9) 
                        return false;
                if(hash[num])
                    return false;
                hash[num]=true;
                
            }
        }
        //left diganol sum
        int leftDiagSum=grid[row][col]+grid[row+1][col+1]+grid[row+2][col+2];

        //right diganol sum
        int rightDiagSum= grid[row][col+2]+grid[row+1][col+1]+grid[row+2][col];


        if(leftDiagSum!=rightDiagSum)
            return false;
        

        //checking rows
        int row1= grid[row][col]+ grid[row][col+1]+ grid[row][col+2];
        int row2=  grid[row+1][col]+ grid[row+1][col+1]+ grid[row+1][col+2];
        int row3=  grid[row+2][col]+ grid[row+2][col+1]+ grid[row+2][col+2];


        //checking cols

        int col1= grid[row][col]+grid[row+1][col]+grid[row+2][col];
        int col2= grid[row][col+1]+grid[row+1][col+1]+grid[row+2][col+1];
        int col3= grid[row][col+2]+grid[row+1][col+2]+grid[row+2][col+2];
         if (!(row1 == leftDiagSum && row2 == leftDiagSum && row3 == leftDiagSum)) {
            return false;
        }
        
         if (!(col1 == rightDiagSum && col2 == rightDiagSum && col3 == rightDiagSum)) {
            return false;
        }

        return true;
        


    }


    public int numMagicSquaresInside(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int magicSquares = 0;
        if(n<3 || m<3){
            return magicSquares;
        }
        // Traverse each possible 3x3 subgrid
        for (int i = 0; i+2 <n; i++) {
            for (int j = 0;j+2<m; j++) {
                if (isMagicSquare(grid, i, j)) {
                    magicSquares++;
                }
            }
        }
        
        return magicSquares;
    }
}
