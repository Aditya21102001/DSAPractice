// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string s, int n) {
        int c=0, l=-1, r=-1, ms=0, st=0;
        for(int i=0; i<n; i++)
        {
            int a=s[i]=='0'?1:-1;
            if(c+a<a)
            {
                st=i;
                c=a;
            }
            else
            {
                c=c+a;
            }
            if(ms<c)
            {
                l=st;
                r=i;
                ms=c;
            }
        }
        if(l==-1 && r==-1)
            return {-1};
        return {l+1, r+1}; 
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}  // } Driver Code Ends