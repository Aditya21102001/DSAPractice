class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_s=nums[0];
        int ma_s=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            curr_s=max(curr_s+nums[i], nums[i]);
            ma_s=max(ma_s, curr_s);
        }
        return ma_s;
    }
};