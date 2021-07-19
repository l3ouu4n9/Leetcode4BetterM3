/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* LCA = root;
        int root_val = root -> val;
        int p_val = p -> val;
        int q_val = q -> val;
        
        if (p_val < root_val && q_val < root_val) {
            LCA = lowestCommonAncestor(root -> left, p, q);
        } else if (p_val > root_val && q_val > root_val) {
            LCA = lowestCommonAncestor(root -> right, p, q);
        }
        
        return LCA;
    }
};
