// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool help(int s, int p, vector<bool> vi, vector<int> adj[])
    {
        vi[s]=true;
        for(auto x: adj[s])
        {
            if(!vi[x])
            {
                bool t=help(x, s, vi, adj);
                if(t)
                    return true;
            }
            else
            {
                if(x!=p)
                    return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> vi(V, false);
        for(int i=0; i<V; i++)
        {
            if(vi[i]==false)
            {
                bool c=help(i, -1, vi, adj);
                if(c)
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends