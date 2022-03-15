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
    void helper(TreeNode* l, TreeNode* r)
    {
        if(l==NULL && r==NULL)
            return;
        if(l!=NULL || r!=NULL)
            return;
        swap(l->val, r->val);
        
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        TreeNode* t=root->left;
        root->left=invertTree(root->right);
        root->right=invertTree(t);
        return root;
        
    }
};