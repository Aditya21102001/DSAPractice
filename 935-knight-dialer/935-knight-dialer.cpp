class Solution {
public:
    //vector<vector<vector<int>>> memo(4,vector<vector<int>>(3,vector<int>(n,-1)));
    vector<vector<vector<int>>>memo;
    int dx[8]={-2, -2, -1, 1, 2, 2, 1, -1};
    int dy[8]={-1, 1, 2, 2, 1, -1, -2, -2};
    int rec(int i, int j, int l)
    {
        if(i<0 or i>3 or j<0 or j>2 or (i==3 and j==2) or (i==3 and j==0))
            return 0;
        if(l==0)
        {
            return 1;
        }
        if(memo[i][j][l]!=-1)
            return memo[i][j][l];
        int ans=0;
        for(int k=0; k<8; k++)
        {
            int nr=dx[k]+i;
            int nc=dy[k]+j;
            if(nr<0 or nc<0 or nr>3 or nc>2 or (nr==3 and (nc==0 or nc==2)))
            {
                continue;
            }
            else 
            {
                ans=(ans%1000000007+rec(nr,nc,l-1)%1000000007)%1000000007;
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
                ans=(ans%1000000007+rec(i, j, n-1)%1000000007)%1000000007;
            }
        }
        return ans;
    }
};