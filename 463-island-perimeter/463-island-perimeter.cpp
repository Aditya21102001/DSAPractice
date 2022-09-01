class Solution {
public:
    vector<int> dx={1, 0, 0, -1};
    vector<int> dy={0, 1, -1, 0};
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int sr=-1, sc=-1;
        int c=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    c++;
                }
            }
        }
        int ans=4*c;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    int ct=0;
                    for(int k=0; k<4; k++)
                    {
                        if(i+dx[k]>=0 && i+dx[k]<n && j+dy[k]>=0 && j+dy[k]<m)
                        {
                            if(grid[i+dx[k]][j+dy[k]]==1)
                            {
                                ct++;
                            }
                        }
                    }
                    ans-=ct;
                    
                }
            }
        }
        return ans;
    }
};