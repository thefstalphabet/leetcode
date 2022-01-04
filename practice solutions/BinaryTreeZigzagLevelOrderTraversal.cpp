// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        // when the root node is null
        if(root == NULL) return result;
        queue<TreeNode*> que; 
        que.push(root);
        // when flag is true then we the traversal goes left to righ
        // when it is false the traversal goes right to left
        bool flag = true;
        while(!que.empty()){
            // size of the each level
            int size = que.size();
            // it stores the rows
            vector<int> row;
            for(int i=0; i<size; i++){
                // accessing every node as node
                TreeNode* node = que.front();
                que.pop();
                // pusing it into row vector
                row.push_back(node->val);
                if(node->left!=NULL){
                    que.push(node->left);
                }
                if(node->right!=NULL){
                    que.push(node->right);
                }
            }
            // when the traversal goes left to right
            if(flag == true){
                result.push_back(row);
                flag = false;
            // when the traversal goes right to left
            } else{
                reverse(row.begin(), row.end());
                result.push_back(row);
                flag = true;
            }
        }
        return result;
    }
};