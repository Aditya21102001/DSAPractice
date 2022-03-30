// { Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    long long maxProduct(int arr[], int n) {
        long long f=INT_MIN, s=INT_MIN, t=INT_MIN, mf=INT_MAX, ms=INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>f)
            {
                t=s;
                s=f;
                f=arr[i];
            }
            else if(arr[i]>s)
            {
                t=s;
                s=arr[i];
            }
            else if(arr[i]>t)
            {
                t=arr[i];
            }
            if(arr[i]<mf)
            {
                ms=mf;
                mf=arr[i];
            }
            else if(arr[i]<ms)
            {
                ms=arr[i];
            }
        }
        return max((long long)mf*(long long)ms*(long long)f, (long long)f*(long long)s*(long long)t);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends