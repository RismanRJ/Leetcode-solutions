class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans =0;
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            unordered_map<int,int> evnMpp,oddMpp;
            for(int j=i;j<n;j++){
                if(nums[j]&1) oddMpp[nums[j]]++;
                else evnMpp[nums[j]]++;

                if(evnMpp.size()== oddMpp.size()) ans = max(ans, j-i+1);
            }
        }
        


        return ans;
    }
};