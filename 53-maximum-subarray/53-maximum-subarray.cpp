class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res=INT_MIN, curr_s=0;
        for(int i=0; i<nums.size(); i++)
        {
            curr_s=max(curr_s+nums[i], nums[i]);
            res=max(curr_s, res);
        }
        return res;
    }
};