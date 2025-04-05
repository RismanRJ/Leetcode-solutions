class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int n =(int)(s.length());
        int maxLen =0;
        for(int i=0,j=0;j<n;j++){
           
            if(mpp[s[j]]>0){
                i= max(i,mpp[s[j]]);
            }
            int len = j-i+1;
            maxLen = max(len,maxLen);
            mpp[s[j]]=j+1;
        }
        return maxLen;
    }
};