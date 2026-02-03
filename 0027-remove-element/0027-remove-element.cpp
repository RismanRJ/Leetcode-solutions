class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val)nums[index++]= nums[i]; 
            // initially it will be updating in same place, but once if val matches , i move forward , but index stuck at val which need to be replaced
        }

        return index;
    }
};