class Solution {
public:
    // void dfs(vector<vector<int>>& isConnected, int i, vector<int> &v)
    // {
    //     for(int j=0; j<isConnected[i].size(); j++)
    //     {
    //         if(v[j]==1 || isConnected[i][j]==0)
    //         {
    //             continue;
    //         }
    //         else
    //         {
    //             v[j]=1;
    //             dfs(isConnected, j, v);
    //         }
    //     }
    //     return ;
    // }
    void dfs(vector<vector<int>>& isConnected, int i, vector<int> &v)
    {
        for(int j=0; j<isConnected[i].size(); j++)
        {
            if(v[j]==1 || isConnected[i][j]==0)
            {
                continue;
            }
            else
            {
                v[j]=1;
                dfs(isConnected, j, v);
            }
        }
        return ;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int c=0;
        vector<int> v(isConnected.size(), 0);
        for(int i=0; i<isConnected.size(); i++)
        {
            if(v[i]==0)
            {
                c++;
                dfs(isConnected, i, v);
            }
        }
        return c;
    }
};