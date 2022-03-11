class Solution {
public:
    int jump(vector<int>& nums) {
        int res=INT_MAX;
        int n=nums.size();
        int max_reach=nums[0], curr=nums[0];
        if(n==1)
            return 0;
        int ans=1, i=1;
        while(max_reach<n-1)
        {
            if(i+nums[i]>curr)
            {
                curr=i+nums[i];
            }
            if(i==max_reach)
            {
                ans++;
                max_reach=curr;
            }
            i++;
        }
        return ans;
    }
};