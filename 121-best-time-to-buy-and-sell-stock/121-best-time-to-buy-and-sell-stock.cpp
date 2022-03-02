class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> rm(n, 0);
        rm[n-1]=0;
        int ma=0;
        for(int i=n-2; i>=0; i--)
        {
            ma=max(ma, prices[i+1]);
            rm[i]=ma;
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(rm[i]>prices[i])
            {
                ans=max(ans, rm[i]-prices[i]);
            }
        }
        return ans;
    }
};