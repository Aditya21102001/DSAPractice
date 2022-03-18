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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode *> q;
        q.push(root);
        int i=1;
        while(q.empty()==false)
        {
            int n=q.size();
            vector<int> v;
            for(int i=0; i<n; i++)
            {
                TreeNode *tp=q.front();
                q.pop();
                v.push_back(tp->val);
                if(tp->left!=NULL)
                {
                    q.push(tp->left);
                }
                if(tp->right!=NULL)
                {
                    q.push(tp->right);
                }
            }
            if(i%2==0)
            {
                reverse(v.begin(), v.end());
            }
            ans.push_back(v);
            i++;
        }
        return ans;
    }
};







