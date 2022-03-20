class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> pr(n, 0);
        int ma=prices[n-1];
        pr[n-1]=ma;
        for(int i=n-2; i>=0; i--)
        {
            ma=max(ma, prices[i]);
            pr[i]=ma;
        }
        int ans=INT64_MIN;
        for(int i=0; i<n; i++)
        {
            ans=max(ans, pr[i]-prices[i]);
        }
        return ans;
    }
};