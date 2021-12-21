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

// Recursive way to Traversal
class Solution {
private:
    void postOrder(TreeNode* node, vector<int> &ans) {
        // Basecase
        if(node == NULL) return;
        // LEFT, RIGHT, ROOT
        postOrder(node->left, ans);
        postOrder(node->right, ans);
        ans.push_back(node->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        // The vec stores the post order traversal of tree
        vector<int> ans;
        postOrder(root, ans);
        return ans;
    }
};

// Iterative way to Traversal using 2 stack
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        // Base Case
        if(root==NULL) return ans;
        // two stacks
        stack<TreeNode*> s1; s1.push(root);
        stack<int> s2;
        while(!s1.empty()){
            root = s1.top();
            s1.pop();
            s2.push(root->val);
            if(root->left!=NULL) s1.push(root->left);
            if(root->right!=NULL) s1.push(root->right);
        }
        // Pushing the values to the vec
        while(!s2.empty()){
            ans.push_back(s2.top());
            s2.pop();
        }
        return ans;
    }
};

// Iterative way to Traversal using 1 stack
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        // Base Case
        if(root==NULL) return ans;
        stack<TreeNode*> s1; s1.push(root);
        while(!s1.empty()){
            root = s1.top();
            s1.pop();
            ans.push_back(root->val);
            if(root->left!=NULL) s1.push(root->left);
            if(root->right!=NULL) s1.push(root->right);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};