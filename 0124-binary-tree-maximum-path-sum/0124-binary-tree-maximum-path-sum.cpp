/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int maxSum(TreeNode* root, int& sum){
        if(!root) return INT_MIN;

        int leftSum = max(maxSum(root->left,sum),0);
        int rightSum = max(maxSum(root->right,sum),0);

        sum= max(sum, leftSum+rightSum+root->val);

        return max(leftSum,rightSum)+root->val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int sum =INT_MIN;
        maxSum(root,sum);

        return sum;
    }
};