class Solution {
private:
    void FindSum(vector<int>& nums, int n){
        if(n==1)return;
        vector<int>temp(n-1,0);
        for(int i=0;i<n-1;i++){
            int a=  (nums[i]+nums[i+1])%10;
            temp[i]= a;
        }
        nums=temp;
        FindSum(nums,nums.size());
        
    }
public:
    int triangularSum(vector<int>& nums) {
        FindSum(nums,nums.size());
        return nums[0];
    }
};