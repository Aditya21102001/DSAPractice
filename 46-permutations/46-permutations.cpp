class Solution {
public:
    void per(vector<int> &nums, vector<vector<int>>& ans, vector<int>& v, vector<bool>& ch)
    {
        if(v.size()==nums.size())
        {
            ans.push_back(v);
            return;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(!ch[i])
            {
                v.push_back(nums[i]);
                ch[i]=true;
                per(nums, ans, v, ch);
                v.pop_back();
                ch[i]=false;
            }
        }
        return;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        vector<bool> ch(nums.size(), false);
        per(nums, ans, v, ch);
        return ans;
    }
};