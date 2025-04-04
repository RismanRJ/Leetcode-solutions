class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int maxEl= *max_element(heights.begin(),heights.end());
        vector<int> hash(maxEl+1);
        int cnt=0;
        for(int i: heights) hash[i]++;
        int idx=0;
        for(int i=1;i<= maxEl;i++){
            while(hash[i]--){
                if(heights[idx++]!=i) cnt++;
            }
        }

        return cnt;
    }
};