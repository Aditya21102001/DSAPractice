// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> dx={0, 0, 1, -1};
    vector<int> dy={1, -1, 0, 0};
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        if(A[0][0] == 0 || A[X][Y] == 0) return -1;
        queue<pair<int, int>> q;
        q.push({0, 0});
        int ans = 0;
        while(!q.empty()) {
            int sq = q.size();
            for(int i = 0; i<sq; i++)
            {
                auto p = q.front();
                q.pop();
                if(p.first == X && p.second == Y) 
                    return ans;
                for(int k=0; k<4; k++) {
                    int x = dx[k] + p.first;
                    int y = dy[k] + p.second;
                    if(x >= 0 && y >= 0 && x < N && y < M && A[x][y] == 1) {
                        q.push({x, y});
                        A[x][y] = 0;
                    }
                }
            }
            ans++;
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}  // } Driver Code Ends