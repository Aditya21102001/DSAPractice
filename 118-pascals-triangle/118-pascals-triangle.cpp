class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        if(numRows==0)
            return ans;
        vector<int> ve;
        ve.push_back(1);
        ans.push_back(ve);
        for(int i=0; i<numRows-1; i++)
        {
            int n=(int)ans[i].size()+1;
            vector<int> v(n, 1);
            for(int j=n-2; j>0; j--)
            {
                v[j]=ans[i][j]+ans[i][j-1];
            }
            ans.push_back(v);
        }
        return ans;
    }
};