class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0,j=0;
        int n = players.size();
        int m = trainers.size();
        int cnt =0;

        while(i<n && j<m){
            if(players[i]<=trainers[j]){
                i++;
                j++;
                cnt++;
            }
            else if(players[i]>trainers[j]) j++;
            else i++;
        }

        return cnt;
    }
};