class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        vector<vector<int>> arr;
        int n = meetings.size();
        arr.push_back(meetings[0]);

        for(int i=1;i<n;i++){
            auto &it = arr.back();
            auto &mt = meetings[i];
            if(it[1]>=mt[0]){
                it[1]= max(it[1],mt[1]);
            }
            else if(mt[0]-1== it[1]){
                 it[1]= max(it[1],mt[1]);
            }
            else arr.push_back(mt);
        }
        int cnt=0;

        for(auto it: arr){
            cout<<it[0]<<" "<<it[1]<<" ";
            cout<<endl;
        }
        for(int i=0;i<arr.size()-1;i++){
            int end = arr[i+1][0];
            int st = arr[i][1];
            cnt+= end-st-1;
        }
        
     
            cnt+=days-arr.back()[1];   
        
        
            cnt+= arr.front()[0]-1;
        

        return  cnt;

    }
};