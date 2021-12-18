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
    void preOrder(TreeNode* node, vector<int> &ans) {
        // Basecase
        if(node==NULL) return;
        // ROOT, LEFT, RIGHT
        ans.push_back(node->val);
        preOrder(node->left, ans);
        preOrder(node->right, ans);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        // The vec stores the pre order traversal of tree
        vector<int> ans;
        preOrder(root, ans);
        return ans;
    }
};

// Iterative way to traversal
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans; // to store ans
        if(root==NULL) return ans; 
        stack<TreeNode*> st; 
        st.push(root);
        while(!st.empty()){
            root = st.top(); // accessing the top ele of stack 
            st.pop();
            ans.push_back(root->val);
            if(root->right!=NULL){
                st.push(root->right);
            }
            if(root->left!=NULL){
                st.push(root->left);
            }
        }
        return ans;
    }
};