class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int minOps= INT_MAX;
        int l=0,r=0,rem=k,changes=0;
        while(r<blocks.size()){
           if(blocks[r]=='W'){
            rem--;
            changes++;
           }
           else if(blocks[r]=='B') rem--;

           if(rem==0){
            if(changes<minOps)minOps= changes;
            if(blocks[l++]=='W')changes--;
            rem++;
           }
           r++;
        }

        return minOps;
    }
};