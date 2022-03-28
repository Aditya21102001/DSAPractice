class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long ans=0;
        for(int i=columnTitle.size()-1; i>=0; i--)
        {
            ans+=pow(26, columnTitle.size()-i-1)*(columnTitle[i]-'A'+1);
        }
        return ans;
    }
};