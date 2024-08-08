class Solution {
    public static boolean isValid(int r,int c, int n ,int m){

        return (r>=0 && r<n && c>=0 && c<m);

    }
    public int[][] spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
       int steps= rows*cols;
        int[][] sol = new int[steps][2];
        int height=1,width=1;
        int r=rStart;
        int c=cStart;
        int cnt=0;
        while(cnt<steps){

                //right
                for(int i=0;i<width;i++){
                    if(isValid(r,c,rows,cols)){
                        sol[cnt]= new int[]{r,c};
                        cnt++;
                    }
                     c++;
                }
                width++;

                //down
                for(int i=0;i<height;i++){
                    if(isValid(r,c,rows,cols)){
                        sol[cnt]=new int[]{r,c};
                         cnt++;
                    }
                    r++;
                }
                height++;


                //left
                for(int i=0;i<width;i++){
                    if(isValid(r,c,rows,cols)){
                        sol[cnt]=new int[]{r,c};
                         cnt++;
                    }
                    c--;
                }
                width++;

                //top
                for(int i=0;i<height;i++){
                    if(isValid(r,c,rows,cols)){
                        sol[cnt]=new int[]{r,c};
                         cnt++;
                    }
                    r--;
                }
                height++;

        }
        return sol;
    }
}