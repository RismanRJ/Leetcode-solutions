class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int totalSum = 0;
        for(int i: arr) totalSum+=i;

        int cnt=0,curSum=0;
        for(int i: arr){
            curSum+=i;
            if(curSum==totalSum/3) {
                cnt++;
                curSum=0;
            }
           
        }

        return cnt>=3 && totalSum%3==0;
    }
};