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
    bool isSymmetricOnBothSide(TreeNode* p, TreeNode* q){
        if(!p || !q){
            return p==q;
        }
        if(p->val != q->val) return false;

        return (p->val==q->val) &&isSymmetricOnBothSide(p->left,q->right) && isSymmetricOnBothSide(p->right,q->left);

    }
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return isSymmetricOnBothSide(root->left,root->right);
    }
};