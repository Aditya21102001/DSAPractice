class Solution {
public:
    void helper(vector<vector<int>> &ans, vector<int> &curr, int index, int target, vector<int> &candidates)
    {
        if(target==0)
        {
            ans.push_back(curr);
            return;
        }
        for (int i = index; i < candidates.size(); i++)
        {
            if (i > index and candidates[i] == candidates[i - 1])
            {
                continue;
            }
            int pick = candidates[i];
            // backtracking
            if (target - pick < 0)
                break;

            curr.push_back(pick);
            helper(ans, curr, i+1, target - pick, candidates);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        if(candidates.size()==0)
            return ans;
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        int n=candidates.size();
        helper(ans, curr, 0, target, candidates);
        return ans;
    }
};