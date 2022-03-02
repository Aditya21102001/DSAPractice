class Solution {
public:
    vector<vector<int>>ans;
    void permutation(vector<int>&nums, int index)
    {
        if(index==nums.size())
        {
            ans.push_back(nums);
            return;
        }
        set<int>s;  
        for(int i=index;i<nums.size();i++)
        {
            if(s.count(nums[i]))
            {
                continue;
            }
            s.insert(nums[i]);
            swap(nums[i],nums[index]);
            permutation(nums,index+1);
            swap(nums[i],nums[index]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        permutation(nums,0);
        return ans;
    }
};