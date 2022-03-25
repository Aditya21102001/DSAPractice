class Solution {
public:
    void help(vector<int> &candidates,  vector<int> &out, vector<vector<int>> &ans, int target, int in)
    {
        if(target==0)
        {
            ans.push_back(out);
            return;
        }
        if(target<0)
        {
            return;
        }
        for(int i=in; i<candidates.size(); i++)
        {
            if(i!=in && candidates[i]==candidates[i-1])continue;
            out.push_back(candidates[i]);
            help(candidates, out, ans, target-candidates[i], i+1);
            out.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        vector<int> out;
        help(candidates, out, ans, target, 0);
        return ans;
    }
};