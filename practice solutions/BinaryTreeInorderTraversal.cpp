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

// Recursive way to traversal
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

// Iterative way to traversal
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;
        TreeNode* node = root;
        while(1){
            if(node!=NULL){
                st.push(node);
                node = node->left;
            }
            else{
                if(st.empty()==true) break;
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
    }
};