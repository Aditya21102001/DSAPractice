class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pr(n);
        pr[0]=1;
        for(int i=1; i<n; i++)
        {
            pr[i]=nums[i-1]*pr[i-1];
        }
        vector<int> su(n);
        su[n-1]=1;
        for(int i=n-2; i>=0; i--)
        {
            su[i]=nums[i+1]*su[i+1];
        }
        vector<int> ans;
        for(int i=0; i<n; i++)
        {
            ans.push_back(pr[i]*su[i]);
        }
        return ans;
    }
};