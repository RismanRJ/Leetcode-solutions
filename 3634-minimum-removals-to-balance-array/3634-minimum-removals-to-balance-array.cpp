class Solution {
public:
#define ll long long
    int minRemoval(vector<int>& nums, int k) {

        int minEle = INT_MAX, n = nums.size();
        if (n == 1)
            return 0;
        sort(nums.begin(), nums.end());
        int left = 0, right = 1;
        while (right < n) {
            ll MIN = nums[left];
            ll MAX = nums[right];
            if (MAX <= (k * MIN))
                minEle = min(minEle, n - (right - left + 1));
            else
                left++; // if condition is false , no need to check next ele,
                        // however after that right idx also will be false for
                        // this left indexed element , so move left pointer
            right++;
        }

        return minEle == INT_MAX
                   ? n - 1
                   : minEle; // If INT_MAX is ans , you need to remove the all
                             // the elements except one , so n-1
    }
};