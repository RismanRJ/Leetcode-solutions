class Solution {
public:
    int reverse(int x) {
        int rev=0 ;

        while(x){
            int last = x % 10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10) return 0; // to check the integer overflow range
            //Notes
// If ans is greater than INT_MAX / 10, multiplying it by 10 and adding any digit would exceed INT_MAX.
// Similarly, if ans is less than INT_MIN / 10, multiplying it by 10 and adding any digit would go below INT_MIN.
            rev = (rev*10)+last;
            x/=10;
        }
        return rev;
    }
};