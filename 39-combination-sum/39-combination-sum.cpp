class Solution {
public:
    void helper(vector<vector<int>> &ans, vector<int> &curr, int n, int target, vector<int> &candidates)
    {
        if(target==0)
        {
            ans.push_back(curr);
            return;
        }
        if(n<=0 || target<0)
        {
            return;
        }
        curr.push_back(candidates[n-1]);
        helper(ans, curr, n, target-candidates[n-1], candidates);
        curr.pop_back();
        helper(ans, curr, n-1, target, candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        if(candidates.size()==0)
            return ans;
        vector<int> curr;
        int n=candidates.size();
        helper(ans, curr, n, target, candidates);
        return ans;
    }
};