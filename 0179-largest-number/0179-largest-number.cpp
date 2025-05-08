class Solution {
#define ll long long

public:
    string largestNumber(vector<int>& nums) {
        
        sort(nums.begin(),nums.end(),[](ll a, ll b){
            string a1= to_string(a);
            string a2= to_string(b);
         
            return (a1+a2)>(a2+a1);
        });

       

        string ans= "";

        if(nums[0]==0) return "0";

        for(int i: nums) ans += to_string(i);

        return ans;
    }
};