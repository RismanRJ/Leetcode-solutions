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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> mpp;
        queue<pair<int,pair<int,TreeNode*>>>q;
        vector<vector<int>> ans;
        if(!root) return ans;

        q.push({0,{0,root}});

        while(!q.empty()){
            auto it= q.front();
            int line = it.first;
            int level = it.second.first;
            auto node = it.second.second;
            q.pop();
            mpp[line][level].insert(node->val);
            if(node->left) q.push({line-1,{level+1,node->left}});
            if(node->right) q.push({line+1,{level+1,node->right}});
        }

        for(auto it: mpp){
            vector<int> temp;
            for(auto curr : it.second){
                for(auto ele : curr.second){
                        temp.push_back(ele);
                    }
            }
            ans.push_back(temp);
        }




        return ans;
    }
};