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
    bool tree(TreeNode* root, long left, long right){
        if(!root) return true;

        if(root->val < left || root->val > right || root->val == right || root->val == left) return false;

        return (tree(root->left, left, root->val) && tree(root->right, root->val, right));
    }
    bool isValidBST(TreeNode* root) {
            long min = INT_MIN;
            long max = INT_MAX;
            return (tree(root, min, max));
    }
};
