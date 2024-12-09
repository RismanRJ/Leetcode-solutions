class Solution {
    public int missingNumber(int[] nums) {
        int xor1=0;
        int xor2=0;

        for(int i=0;i<=nums.length-1;i++){

            xor2=xor2^nums[i];
            xor1=xor1^(i+1);
        }

        return xor1^xor2;
    }
}


//another apporach  --> given array = [3,0,1]
// total sum (0  to n) - array sum
// n(n+1)/2 - sumOfArray
//Example -->  n =3, totalSum =3*(3+1)/2 = 6
//array Sum = 4 
// ans = totalSum - arraySum ==> 6-4 =2
//Missing number =2