class Solution {
    private: 
    int subsets(vector<int>& nums , int st,int sum){
        if(st==nums.size()) return sum;
         return subsets(nums,st+1,sum^nums[st])+ subsets(nums,st+1,sum);
    
    }
public:
    int subsetXORSum(vector<int>& nums) {
        return subsets(nums,0,0);
    }
};