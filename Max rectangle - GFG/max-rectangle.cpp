// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int arr[MAX][MAX], int n, int m) {
        int *cur;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                cur=arr[0];
            }
            else
            {
                for(int j=0; j<m; j++)
                {
                    if(arr[i][j]==0)
                    {
                        cur[j]=0;
                    }
                    else
                    {
                        cur[j]+=arr[i][j];
                    }
                }
            }
            vector<int> ps(m, -1), ns(m, -1);
            stack<int> st;
            for(int j=0; j<m; j++)
            {
                while(!st.empty() && cur[st.top()]>=cur[j])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    ps[j]=-1;
                }
                else
                {
                    ps[j]=st.top();
                }
                st.push(j);
            }
            while(!st.empty())
                st.pop();
            for(int j=m-1; j>=0; j--)
            {
                while(!st.empty() && cur[st.top()]>=cur[j])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    ns[j]=m;
                }
                else
                {
                    ns[j]=st.top();
                }
                st.push(j);
            }
            int res=0;
            for(int j=0; j<m; j++)
            {
                res=max(res, (ns[j]-ps[j]-1)*cur[j]);
            }
            ans=max(ans, res);
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends