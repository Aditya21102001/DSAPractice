class Solution {
public:
    void help(vector<int>& nums,vector<int>&out,vector<vector<int>>&ans,int i)
    {
        
        if(i == nums.size())
        {
            ans.push_back(out);
            return;
        }
        out.push_back(nums[i]);
        help(nums,out,ans, i + 1);
        out.pop_back();
        help(nums,out,ans, i + 1); 
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>out;
        help(nums,out,ans,0);
        return ans;
    }
};