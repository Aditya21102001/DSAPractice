class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        int c=1;
        while(n>1)
        {
            int j=ans.size()-1;
            int t=pow(2, c);
            while(j>=0)
            {
                ans.push_back(ans[j]+t);
                j--;
            }
            n--;
            c++;
        }
        return ans;
    }
};