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
    int find(TreeNode* node, int &maxi){
        if(!node) return 0;
        // if the functions call return a neg. num we can't consider it, we consider 0
        int left = max(0, find(node->left, maxi));
        int right = max(0, find(node->right, maxi));
        // calculating maximum path
        maxi = max(maxi, (node->val + left + right));
        return node->val + max(left, right);
    }
public:
    int maxPathSum(TreeNode* root) {
        // it stores the maximum path sum of the nodes
        int maxi = INT_MIN;
        find(root, maxi);
        return maxi;
    }
};