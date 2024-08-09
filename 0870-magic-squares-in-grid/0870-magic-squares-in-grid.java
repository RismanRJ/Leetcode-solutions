

class Solution {

    public static boolean isMagicSquare(int[][] grid, int rowStart, int colStart) {
        HashSet<Integer> uniqueNumbers = new HashSet<>();
        int sum = 0;
        
        // Check if the grid contains distinct numbers from 1 to 9
        for (int i = rowStart; i < rowStart + 3; i++) {
            for (int j = colStart; j < colStart + 3; j++) {
                if (grid[i][j] < 1 || grid[i][j] > 9 || !uniqueNumbers.add(grid[i][j])) {
                    return false;
                }
            }
        }
        
        // Calculate the sum of the first row
        for (int j = colStart; j < colStart + 3; j++) {
            sum += grid[rowStart][j];
        }
        
        // Check all rows
        for (int i = rowStart + 1; i < rowStart + 3; i++) {
            int rowSum = 0;
            for (int j = colStart; j < colStart + 3; j++) {
                rowSum += grid[i][j];
            }
            if (rowSum != sum) {
                return false;
            }
        }
        
        // Check all columns
        for (int j = colStart; j < colStart + 3; j++) {
            int colSum = 0;
            for (int i = rowStart; i < rowStart + 3; i++) {
                colSum += grid[i][j];
            }
            if (colSum != sum) {
                return false;
            }
        }
        
        // Check diagonals
        int diagSum1 = grid[rowStart][colStart] + grid[rowStart + 1][colStart + 1] + grid[rowStart + 2][colStart + 2];
        int diagSum2 = grid[rowStart][colStart + 2] + grid[rowStart + 1][colStart + 1] + grid[rowStart + 2][colStart];
        
        return diagSum1 == sum && diagSum2 == sum;
    }

    public int numMagicSquaresInside(int[][] grid) {
        int n = grid.length;
        int m = grid[0].length;
        int magicSquares = 0;

        // Traverse each possible 3x3 subgrid
        for (int i = 0; i <= n - 3; i++) {
            for (int j = 0; j <= m - 3; j++) {
                if (isMagicSquare(grid, i, j)) {
                    magicSquares++;
                }
            }
        }
        
        return magicSquares;
    }
}
