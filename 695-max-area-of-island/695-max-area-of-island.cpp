class Solution {
public:
    int df(int i, int j, vector<vector<int>>& vi, vector<vector<int>>& grid, int n, int m)
    {
        if(i<0 || i>=n || j<0 || j>=m)
        {
            return 0;
        }
        if(grid[i][j]==0)
        {
            return 0;
        }
        int c=0;
        if(vi[i][j]!=1)
        {
            vi[i][j]=1;
            c+=1;
            //c+=df(i-1, j-1, vi, grid, n, m);
            c+=df(i-1, j, vi, grid, n, m);
            //c+=df(i-1, j+1, vi, grid, n, m);
            c+=df(i, j-1, vi, grid, n, m);
            c+=df(i, j+1, vi, grid, n, m);
            //c+=df(i+1, j-1, vi, grid, n, m);
            c+=df(i+1, j, vi, grid, n, m);
            //c+=df(i+1, j+1, vi, grid, n, m);
        }
        return c;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> vi(n);
        for(int i=0; i<n; i++)
        {
            vi[i]=vector<int>(m, 0);
        }
        int c=0;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(vi[i][j]==0 && grid[i][j]==1)
                {
                    c++;
                    ans=max(ans, df(i, j, vi, grid, n, m));
                }
            }
        }
        return ans;
    }
};