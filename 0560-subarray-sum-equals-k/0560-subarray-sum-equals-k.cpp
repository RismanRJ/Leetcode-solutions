class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
            int cnt=0;
            unordered_map<int,int> mpp;
            mpp[0]=1;
            int sum=0;
            for(int i: nums){
                sum+=i;
                int rem = sum-k;
                if(mpp.find(rem)!=mpp.end()){
                    cnt+=mpp[rem];
                }

                mpp[sum]++;
                
            }


            return cnt;
    }
};