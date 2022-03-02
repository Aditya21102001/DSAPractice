class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size(), l=INT_MAX, r=INT_MAX;
        if(n<3)
            return false;
        for(int i=0; i<n; i++)
        {
            if(nums[i]<=l)
            {
                l=nums[i];
            }
            else if(nums[i]<=r)
            {
                r=nums[i];
            }
            else
                return true;
        }
        return false;
    }
};