class Solution {
public:
    void help(vector<int>& nums,vector<int>&out,set<vector<int>>&ans,int i)
    {
        
        if(i == nums.size())
        {
            ans.insert(out);
            return;
        }
        out.push_back(nums[i]);
        help(nums,out,ans, i + 1);
        out.pop_back();
        help(nums,out,ans, i + 1); 
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());
        vector<int>out;
        help(nums,out,ans,0);
        vector<vector<int>> res;
        for(auto x: ans)
            res.push_back(x);
        return res;
    }
};