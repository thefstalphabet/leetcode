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
    int find(TreeNode* node, int &diameter){
        // when node is null
        if(node==NULL) return 0;
        // lh is the left height of a sub tree
        // rh is the right height of a sub tree
        int lh = find(node->left, diameter);
        int rh = find(node->right, diameter);
        // the var contain the longest path passing via node
        diameter = max(diameter, lh + rh);
        return 1 + max(lh, rh);
}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        find(root, diameter);
        return diameter;
    }
};