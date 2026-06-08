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
int cnt = 0;
    int stk(TreeNode* root, int k){
        if(!root) return 0;
        int left = stk(root->left, k);
        if(left != 0) return left;
        cnt++;
        if(cnt == k) return root->val;
        int right = stk(root->right, k);
        if(right != 0) return right;
        return 0;
    }
    int kthSmallest(TreeNode* root, int k) {
        return (stk(root, k));
    }
};