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
    bool help(TreeNode* root, long long l, long long h)
    {
        if(root==NULL)  
         return true;
        if(root->val<=l || root->val>=h)
            return false;
        bool ll=help(root->left, l, root->val);
        bool r=help(root->right, root->val, h);
        return ll && r;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
     return help(root, INT64_MIN, INT64_MAX);   
    }
};