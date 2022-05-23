// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<int> dx={0, 0, -1, 1};
    vector<int> dy={-1, 1, 0, 0};
    void dfshelp(vector<vector<int>>& image, int n, int m, int i, int j, int nc, int c)
    {
        if(i<0 || j<0 || i>=n || j>=m)
        {
            return;
        }
        if(image[i][j]!=c)
        {
            return;
        }
        image[i][j]=-1;
        for(int k=0; k<4; k++)
        {
            dfshelp(image, n, m, i+dx[k], j+dy[k], nc, c);
        }
        return;
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int nc) {
        int n=image.size(), m=image[0].size(), c=image[sr][sc];
        dfshelp(image, n, m, sr, sc, nc, c);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(image[i][j]==-1)
                {
                    image[i][j]=nc;
                }
            }
        }
        return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends