class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>finalFreq(26,INT_MAX);
        vector<string> ans;
        for(auto word: words){
            vector<int> curFreq(26,0);
            for(auto ch : word) curFreq[ch-'a']++;

            for(char ch='a';ch<='z';ch++ )
                finalFreq[ch-'a']= min(curFreq[ch-'a'],finalFreq[ch-'a']);
        }

        for(char ch='a';ch<='z';ch++){
            while(finalFreq[ch-'a']--){
                ans.push_back(string(1,ch));
            }
        }

        return ans;
    }
};