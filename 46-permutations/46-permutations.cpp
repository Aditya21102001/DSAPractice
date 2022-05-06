class Solution {
public:
    void perm(vector<int> &nums, vector<vector<int>> &ans, int n, int in)
    {
        if(in==n)
        {
            ans.push_back(nums);
            return;
        }
        for(int i=in; i<n; i++)
        {
            swap(nums[i], nums[in]);
            perm(nums, ans, n, in+1);
            swap(nums[i], nums[in]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        perm(nums, ans, n, 0);
        return ans;
    }
};