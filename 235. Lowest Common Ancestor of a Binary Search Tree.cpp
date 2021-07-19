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


OR


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
        int p_val = p -> val;
        int q_val = q -> val;
        
        while (LCA != NULL) {
            int root_val = LCA -> val;
            cout << root_val << endl;
            if (p_val < root_val && q_val < root_val) {
                LCA = LCA -> left;
            } else if (p_val > root_val && q_val > root_val) {
                LCA = LCA -> right;
            } else {
                return LCA;
            }
        }
        
        return NULL;
    }
};
