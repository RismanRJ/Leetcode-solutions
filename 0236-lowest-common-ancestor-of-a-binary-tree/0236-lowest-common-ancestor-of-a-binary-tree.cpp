/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    TreeNode* findLCA (TreeNode* root, TreeNode* p, TreeNode* q){

            if(!root || root ==p || root ==q) return root;

            auto left =findLCA(root->left,p,q);
            auto right =findLCA(root->right,p,q);

            if(!left) return right;
            else if(!right) return left;
            else return root;


    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return root;
        return findLCA(root,p,q);
    }
};