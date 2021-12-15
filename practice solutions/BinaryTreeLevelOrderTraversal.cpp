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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans; // To store ans
        if(root==NULL) return ans; // base case
        queue<TreeNode*> qu;
        qu.push(root); // pushing first node
        while(!qu.empty()){
            vector<int> level;
            int size = qu.size();
            for(int i=0;i<size;i++){
                TreeNode* node = qu.front();
                qu.pop();
                // checking for left and right node of sub tree
                if(node->left!=NULL) qu.push(node->left);
                if(node->right!=NULL) qu.push(node->right);
                level.push_back(node->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
};