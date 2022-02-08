// brute force solution
class Solution {
private:
    void dfs(TreeNode* node, vector<int> &ans){
        if(node==NULL) return;
        dfs(node->left, ans);
        if(node != NULL) ans.push_back(node->val);    
        dfs(node->right, ans);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans;
        dfs(root1, ans), dfs(root2, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};