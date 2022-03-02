class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        int n=in.size();
        vector<vector<int>> ans;
        if(n<=1)
        {
            vector<int> v(2);
            v[0]=in[0][0], v[1]=in[0][1];
            ans.push_back(v);
            return ans;
        }
        sort(in.begin(), in.end());
        for(int i=0; i<n; i++)
        {
            int s=in[i][0];
            int e=in[i][1];
            while(i<n-1 && in[i+1][0]<=e)
            {
                e=max(e, in[i+1][1]);
                i++;
            }
            vector<int> v(2);
            v[0]=s, v[1]=e;
            ans.push_back(v);
        }
        return ans;
    }
};