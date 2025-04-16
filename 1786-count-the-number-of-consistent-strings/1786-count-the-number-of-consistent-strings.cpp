class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int mask =0;

        for(auto ch: allowed) mask|=(1<<ch-'a');
        int cnt=0;
        for(auto word: words){
            bool valid= true;
            for(auto ch: word){
                if((mask & (1<<ch-'a'))==0){
                    valid=false;
                    break;
                }
            }
            if(valid) cnt++;
        }

        return cnt;
    }
};