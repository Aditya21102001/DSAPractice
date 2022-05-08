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
    int pr=0;
    TreeNode* bt(vector<int> &in, vector<int> pre, int is, int ie)
    {
        if(is>ie)
        {
            return NULL;
        }
        TreeNode *root=new TreeNode(pre[pr++]);
        int ind=0;
        for(int i=is; i<=ie; i++)
        {
            if(in[i]==root->val)
            {
                ind=i;
                break;
            }
        }
        root->left=bt(in, pre, is, ind-1);
        root->right=bt(in, pre, ind+1, ie);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return bt(inorder, preorder, 0, preorder.size()-1);
    }
};