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
    int ans=0;
    int findDiameter(TreeNode* root){
        if(root==nullptr) return 0;

        int left =  findDiameter(root->left);
        int right = findDiameter(root->right);


        ans = max(ans,left+right);

        return 1+max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        findDiameter(root);

        return ans;
    }
};