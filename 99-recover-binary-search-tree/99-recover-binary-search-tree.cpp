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
    TreeNode* f=NULL, *p=NULL;
    TreeNode* s=NULL;
    void recoverTreeh(TreeNode* root) {
        if(root==NULL)
        {
            return;
        }
        recoverTreeh(root->left);
        if(p!=NULL && p->val>=root->val)
        {
            if(f==NULL)
                f=p;
            
            s=root;
        }
        p=root;
        recoverTreeh(root->right);
    }

    void recoverTree(TreeNode* root) {
        recoverTreeh(root);
        swap(f->val, s->val);
    }
};