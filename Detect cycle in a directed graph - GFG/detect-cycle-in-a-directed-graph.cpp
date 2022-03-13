// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool help(int s, int V, vector<int> adj[], vector<bool>& vi, vector<bool>& ord)
    {
        vi[s]=true;
        ord[s]=true;
        for(auto x:adj[s])
        {
            if(!vi[x])
            {
                bool t=help(x, V, adj, vi, ord);
                if(t==true)
                    return true;
            }
            else
            {
                if(ord[x])
                {
                    return true;
                }
            }
        }
        ord[s]=false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> vi(V, false);
        vector<bool> ord(V, false);
        for(int i=0; i<V; i++)
        {
            if(vi[i]==false)
            {
                bool c=help(i, V, adj, vi, ord);
                if(c)
                    return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends