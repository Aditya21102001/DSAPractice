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
    TreeNode* bt(vector<int> &in, vector<int> pos, int is, int ie, int &pr)
    {
        if(is>ie)
        {
            return NULL;
        }
        TreeNode *root=new TreeNode(pos[pr--]);
        int ind=0;
        for(int i=is; i<=ie; i++)
        {
            if(in[i]==root->val)
            {
                ind=i;
                break;
            }
        }
        root->right=bt(in, pos, ind+1, ie, pr);
        root->left=bt(in, pos, is, ind-1, pr);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int p=postorder.size()-1;
        return bt(inorder, postorder, 0, postorder.size()-1, p);
    }
};