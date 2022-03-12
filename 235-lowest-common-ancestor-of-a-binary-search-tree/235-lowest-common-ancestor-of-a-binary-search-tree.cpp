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
        /*optimized
        if(root==NULL)
        {
            return NULL;
        }
        if((root->val>=p->val && root->val<=q->val) || (root->val<=p->val && root->val>=q->val))
        {
            return root;
        }
        if(max(p->val, q->val)<root->val)
        {
            return lowestCommonAncestor(root->left, p, q);
        }
        else
        {
            return lowestCommonAncestor(root->right, p, q);
        }*/
        //for normal binary tree also
        if(root==NULL)
        {
            return root;
        }
        if(root==p || root==q)
        {
            return root;
        }
        TreeNode *l=lowestCommonAncestor(root->left, p, q);
        TreeNode *r=lowestCommonAncestor(root->right, p, q);
        if(l!=NULL && r!=NULL)
            return root;
        if(l!=NULL)
            return l;
        return r;
    }
};