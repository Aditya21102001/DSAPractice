// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &mat, int n, int m)
        {
            int mi=INT_MIN;
            int ans=-1;
            for(int i=0; i<n; i++)
            {
                if(lower_bound(mat[i].begin(), mat[i].end(), 1)==mat[i].end())
                {
                    continue;
                }
                int in=lower_bound(mat[i].begin(), mat[i].end(), 1)-mat[i].begin();
                if(m-in>mi)
                {
                    mi=m-in;
                    ans=i;
                }
            }
            return ans;
        }
};

// { Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}  // } Driver Code Ends