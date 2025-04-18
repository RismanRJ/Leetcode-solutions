class Solution {
public:
    string countAndSay(int n) {
        
        string ans ="1";

        for(int i=1;i<n;i++)
        {
            int count =1;
            string temp ="";

            for(int j=0;j<=ans.size()-1;j++){
                if(ans[j]==ans[j+1]) count++;
                else {
                    temp.push_back('0'+count);
                    temp.push_back(ans[j]);
                    count=1;
                }
            }

            ans=temp;

        }
        return ans; 
    }
};