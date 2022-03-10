class Solution {
public:
    static int robh(vector<int> nums) {
        int n=nums.size();
        int dp[n+1];
        dp[0]=0;
        if(n==0)
        {
            return dp[0];
        }
        dp[1]=nums[0];
        for(int i=2; i<=n; i++)
        {
            dp[i]=max(dp[i-2]+nums[i-1], dp[i-1]);
        }
        return dp[n];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[0];
        }
        return max(robh(vector<int>(nums.begin(), nums.end()-1)), robh(vector<int>(nums.begin()+1, nums.end())));
    }
};