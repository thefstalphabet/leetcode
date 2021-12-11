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
private:
    void inOrder(TreeNode* node, vector<int> &ans){
        // Basecase
        if(node==NULL) return;
        // LEFT, ROOT, RIGHT
        inOrder(node->left, ans);
        ans.push_back(node->val);
        inOrder(node->right, ans);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // The vec stores the in order traversal of tree
        vector<int> ans;
        inOrder(root, ans);
        return ans;
    }
};