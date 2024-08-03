class Solution {
    public int winningPlayerCount(int n, int[][] pick) {
       int[][] sol= new int[n][11];

       for(int i=0;i<pick.length;i++){

        int player= pick[i][0];
        int color= pick[i][1];

        sol[player][color]++;
       }

        int winPlayers=0;
        for(int i=0;i<n;i++){
                for(int win: sol[i]){

                    if(win>i) // if any player picks a balls more than their current 
                    //index or position [ indexing starts from 0 to n-1]
                    {
                        winPlayers++;
                        break;
                    }
                }
        }


        return winPlayers;
       
    }
}