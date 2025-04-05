class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mpp;
        int n =(int)(s.length());
        int maxLen =0;
        for(int i=0,j=0;j<n;j++){
           
            if(mpp[s[j]]>0){
                i= max(i,mpp[s[j]]);  // starting from the next available position  of previously accessed character
            }
            int len = j-i+1;
            maxLen = max(len,maxLen);
            mpp[s[j]]=j+1;  // placing the acceses character indexed to its next position
                            // for tracking the char if it comes again
        }
        return maxLen;
    }
};