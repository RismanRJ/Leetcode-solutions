class Solution {
public:
    string minWindow(string s, string t) {
        int cnt = t.length(), minStart =0 , minLen = INT_MAX;
        unordered_map<char,int> mpp;
        for(auto ch : t) mpp[ch]++;
        int n = s.length();
        for(int i=0,j=0;j<n;j++){
            if(mpp[s[j]]>0) cnt--;  // cehcking if cnt of a char is available then decrease the counter
            mpp[s[j]]--;  // if it is present freq will be decreased else non relevant character will start with -ve
            while(cnt==0){  // if cnt == 0 --> then all the characters have visisted
                if(j-i<minLen){  // updating the minLength of a substring
                    minStart=i;
                    minLen = j-i;
                }
                mpp[s[i]]++;  // just increase the freq
                if(mpp[s[i]]>0) cnt++;  // if the freq is +ve then it is character from the string t --> then     
                                        //increase the counter
                i++;  // shrink the window
            }
        }

        return minLen ==INT_MAX?"": s.substr(minStart,minLen+1);
    }
};