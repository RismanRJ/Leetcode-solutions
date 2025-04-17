class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int pairs=0;

        int n = nums.size();

        unordered_map<int,vector<int>> mpp;

        for(int i=0;i<n;i++) mpp[nums[i]].push_back(i);  //precompute all the valid pairs with indices

        vector<int> divisors;

        for(int i=1;i*i<=k;i++){  // calculating the all valid divisors upto k - TC - sqrt(k)
            if(k%i==0){
                divisors.push_back(i);
                if((k/i)!=i) divisors.push_back(k/i);
            }
        }


        for(auto& [key,ind]: mpp){
            unordered_map<int,int>tracker;
            for(int i:ind){
                int gcdd= gcd(i,k); // --> it will how many parts of k will be contributed in i
                int need = k/gcdd; // --> nothing but j  -- remaining will be k/i
                pairs+= tracker[need]; // how many pairs available before that index

                for(int d: divisors){
                    if(i%d==0) tracker[d]++; // check if the index is divisible by k
                }
            }
        }

        return pairs;
    }
};