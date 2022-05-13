class Solution {
public:
    vector<vector<vector<int>>>memo;
    int dx[8]={-2, -2, -1, 1, 2, 2, 1, -1};
    int dy[8]={-1, 1, 2, 2, 1, -1, -2, -2};
    //vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9},{-1,0,-1}};
    int rec(int i, int j, int l)
    {
        if(l==0)
        {
            return 1;
        }
        if(memo[i][j][l]!=-1)
            return memo[i][j][l];
        int ans=0;
        for(int k=0; k<8; k++)
        {
            if((dx[k]+i>=0 && dx[k]+i<=3) && (dy[k]+j>=0 && dy[k]+j<3))
            {
                if(dx[k]+i==3 && (dy[k]+j==0 || dy[k]+j==2))
                {
                    continue;
                }
                ans=(ans%1000000007+rec(dx[k]+i, dy[k]+j,l-1)%1000000007)%1000000007;
            }
        }
        return memo[i][j][l]=ans;
    }
    int knightDialer(int n) {
        memo=vector<vector<vector<int>>>(4,vector<vector<int>>(3,vector<int>(n,-1)));
        int ans=0;
        for(int i=0; i<=3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if((i==3 && j==0) || (i==3 && j==2))
                {
                    continue;
                }
                ans=(ans%1000000007+rec(i, j, n-1)%1000000007)%1000000007;
            }
        }
        return ans;
    }
};