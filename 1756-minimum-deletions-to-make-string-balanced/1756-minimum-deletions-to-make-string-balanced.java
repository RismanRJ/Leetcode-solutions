// The goal is to make the string balanced by deleting the minimum number of characters. A string is considered balanced if there are no instances where a 'b' appears before an 'a'.

// To solve this problem, we'll use a dynamic programming approach. We'll keep track of the minimum deletions required up to each position in the string to ensure the string remains balanced. We can maintain two states:

// The number of 'b's encountered so far.
// The minimum deletions required if we convert the current character to 'a'.
// Algorithm Steps \U0001f4d8\U0001f4d0
// Initialize variables to count the number of 'b's and to store the minimum deletions.
// Traverse through the string.
// For each character, update the count of 'b's if it's a 'b', otherwise update the minimum deletions considering the current character as 'a'.
// Return the minimum deletions required after processing the entire string.
// Complexity Analysis \U0001f4ca\U0001f9e9
// Time Complexity: O(n), where n is the length of the string. We traverse the string once.
// Space Complexity: O(1), since we use a constant amount of extra space.The goal is to make the string balanced by deleting the minimum number of characters. A string is considered balanced if there are no instances where a 'b' appears before an 'a'.

// To solve this problem, we'll use a dynamic programming approach. We'll keep track of the minimum deletions required up to each position in the string to ensure the string remains balanced. We can maintain two states:

// The number of 'b's encountered so far.
// The minimum deletions required if we convert the current character to 'a'.
// Algorithm Steps \U0001f4d8\U0001f4d0
// Initialize variables to count the number of 'b's and to store the minimum deletions.
// Traverse through the string.
// For each character, update the count of 'b's if it's a 'b', otherwise update the minimum deletions considering the current character as 'a'.
// Return the minimum deletions required after processing the entire string.
// Complexity Analysis \U0001f4ca\U0001f9e9
// Time Complexity: O(n), where n is the length of the string. We traverse the string once.
// Space Complexity: O(1), since we use a constant amount of extra space.


class Solution {
    public int minimumDeletions(String s) {
        int b=0;
        int minCnt=0;
        
        for(char ch:s.toCharArray()){

            if(ch=='b'){
                b++;
            }
            else{
                minCnt= Math.min(minCnt+1, b);
            }
        }
        return minCnt;
    }
}


