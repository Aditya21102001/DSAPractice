class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int ans=nums[0], su=nums[0];
        int n=nums.size();
        int curr=nums[0];
        for(int i=1; i<n; i++)
        {
            su+=nums[i];
            curr=max(curr+nums[i], nums[i]);
            ans=max(ans, curr);
        }
        if(ans<0)
        {
            return ans;
        }
        int mi=INT_MAX;
        curr=0;
        for(int i=0; i<n; i++)
        {
            curr=min(curr+nums[i], nums[i]);
            mi=min(mi, curr);
        }
        return max(su-mi, ans);
    }
};