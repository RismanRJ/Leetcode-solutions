class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);

        char ch= s[0];
        for(char c: s){
            if(c!='9'){
                ch=c;
                break;
            }
        }

        string large="";
        for(char c: s){
            if(c==ch){
                large+="9";
            }
            else large+=c;
        }

        string small="";

        for(char c:s){
            if(c==s[0]) small+="0";
            else small+=c;
        }

        return stoi(large)-stoi(small);

    }
};