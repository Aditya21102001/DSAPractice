// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    vector<int> dx={0, 0, 1, -1};
    vector<int> dy={1, -1, 0, 0};
    int an=0;
    bool dfshelp(vector<vector<int>>& grid, int i, int j, int n, int m)
    {
        if(i<0 || j<0 || i>=n || j>=m)
        {
            return false;
        }
        if(grid[i][j]==2)
        {
            return true;
        }
        if(grid[i][j]==0)
        {
            return false;
        }
        grid[i][j]=0;
        for(int k=0; k<4; k++)
        {
             if(dfshelp(grid, i+dx[k], j+dy[k], n, m))
             {
                 return true;
             }
            
        }
        grid[i][j]=3;
        // if(an==0)
        // {
        //     grid[i][j]=1;
        //     an++;
        // }
        return false;
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int sr=-1, sc=-1;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(grid[i][j]==1)
                {
                    sr=i;
                    sc=j;
                    break;
                }
            }
        }
        bool ans=dfshelp(grid, sr, sc, n, m);
        return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends