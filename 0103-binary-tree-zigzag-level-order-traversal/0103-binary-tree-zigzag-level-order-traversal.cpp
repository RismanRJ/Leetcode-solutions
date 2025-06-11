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
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> ans;
        if(!root) return ans;

        bool flag =true;
        while(!q.empty()){
            vector<int> temp;
            int size= q.size();

            for(int i=0;i<size;i++){
                auto curr = q.front();
                temp.push_back(curr->val);
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            if(flag){
                ans.push_back(temp);
            }
            else{
                vector<int> tempnew (temp.rbegin(),temp.rend());
                ans.push_back(tempnew);
            }
            flag=!flag;
            
        }
        



        return ans;
    }
};